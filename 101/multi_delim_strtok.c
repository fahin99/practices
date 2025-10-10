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

char *strtoken_multi(char *str, const char *delimiters){
    static char *next = NULL;
    char token[1000];
    char *ret_token;
    
    if(str != NULL){
        if(next != NULL) free(next);
        next = (char*)malloc(my_strlen(str)+1);
        strcpy(next, str);
    }
    
    if(next == NULL || my_strlen(next) == 0) return NULL;
    
    int i = 0;
    while(*next != '\0'){
        int is_delim = 0;
        for(int j = 0; delimiters[j] != '\0'; j++){
            if(*next == delimiters[j]){
                is_delim = 1;
                break;
            }
        }
        if(is_delim){
            if(i>0) break; 
            next++; 
        }
        else{
            token[i++] = *next;
            next++;
        }
    }
    if(i==0) return NULL;
    token[i] = '\0';
    ret_token = (char*)malloc(my_strlen(token)+1);
    strcpy(ret_token, token);
    return ret_token;
}

int main(){
    char str[200] = "Hello,World; This.is:a test,with;multiple. delimiters";
    char *delimiters = ",.;: ";
    
    // Test my_strlen function
    printf("Testing my_strlen function:\n");
    printf("Length of '%s': %d\n", str, my_strlen(str));
    printf("Length of '%s': %d\n", delimiters, my_strlen(delimiters));
    printf("Length of empty string: %d\n\n", my_strlen(""));
    
    printf("Original string: %s\n", str);
    printf("Delimiters: %s\n\n", delimiters);
    printf("Tokens:\n");
    
    char *token = strtoken_multi(str, delimiters);
    while(token != NULL){
        printf("'%s'\n", token);
        free(token);
        token = strtoken_multi(NULL, delimiters);
    }
    
    return 0;
}