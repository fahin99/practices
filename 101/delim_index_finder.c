#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strlen(const char *str){
    int length = 0;
    while(str[length] != '\0'){
        length++;
    }
    return length;
}

int find_delim_index(char *str, const char *delimiters){
    static char *next = NULL;
    static int current_index = 0;
    
    if(str != NULL){
        if(next != NULL) free(next);
        next = (char*)malloc(my_strlen(str)+1);
        strcpy(next, str);
        current_index = 0;
    }
    
    if(next == NULL || *next == '\0') return -1;
    while(*next != '\0'){
        int is_delim = 0;
        for(int j = 0; delimiters[j] != '\0'; j++){
            if(*next == delimiters[j]){
                is_delim = 1;
                break;
            }
        }
        
        if(is_delim){
            int found_index = current_index;
            next++;
            current_index++;
            return found_index; 
        }
        else{
            next++;
            current_index++;
        }
    }
    
    return -1; 
}

char *get_token_with_delim_index(char *str, const char *delimiters, int *delim_index){
    static char *next = NULL;
    static int current_index = 0;
    char token[1000];
    char *ret_token;
    
    if(str != NULL){
        if(next != NULL) free(next);
        next = (char*)malloc(my_strlen(str)+1);
        strcpy(next, str);
        current_index = 0;
    }
    
    if(next == NULL || *next == '\0'){
        *delim_index = -1;
        return NULL;
    }
    
    int i = 0;
    int start_index = current_index;
    while(*next != '\0'){
        int is_delim = 0;
        for(int j = 0; delimiters[j] != '\0'; j++){
            if(*next == delimiters[j]){
                is_delim = 1;
                break;
            }
        }
        
        if(is_delim){
            if(i > 0){
                // Found delimiter after token, record its index
                *delim_index = current_index;
                break;
            }
            // Skip leading delimiter
            next++;
            current_index++;
            start_index = current_index;
        }
        else{
            token[i++] = *next;
            next++;
            current_index++;
        }
    }
    
    if(i == 0){
        *delim_index = -1;
        return NULL;
    }
    
    // If we reached end of string without finding delimiter
    if(*next == '\0'){
        *delim_index = -1;
    }
    
    token[i] = '\0';
    ret_token = (char*)malloc(my_strlen(token)+1);
    strcpy(ret_token, token);
    return ret_token;
}

int main(){
    char str[200] = "Hello,World;This.is:a test,with;multiple.delimiters";
    char *delimiters = ",.;:";
    
    printf("Original string: %s\n", str);
    printf("Delimiters: %s\n\n", delimiters);
    
    // Test 1: Find all delimiter indices
    printf("=== Finding all delimiter indices ===\n");
    int delim_idx = find_delim_index(str, delimiters);
    while(delim_idx != -1){
        printf("Delimiter '%c' found at index: %d\n", str[delim_idx], delim_idx);
        delim_idx = find_delim_index(NULL, delimiters);
    }
    
    printf("\n=== Tokenizing with delimiter indices ===\n");
    // Test 2: Get tokens along with delimiter indices
    int delimiter_index;
    char *token = get_token_with_delim_index(str, delimiters, &delimiter_index);
    int token_count = 0;
    
    while(token != NULL){
        token_count++;
        printf("Token %d: '%s'", token_count, token);
        
        if(delimiter_index != -1){
            printf(" | Next delimiter '%c' at index: %d", str[delimiter_index], delimiter_index);
        }
        else{
            printf(" | No more delimiters");
        }
        printf("\n");
        
        free(token);
        token = get_token_with_delim_index(NULL, delimiters, &delimiter_index);
    }
    
    return 0;
}