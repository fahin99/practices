#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *strtoken(char *str, char delimiter){
    static char *next;
    char token[100];
    char *ret_token;
    if(str != NULL){
        if(next!=NULL) free(next);
        next=(char*)malloc(strlen(str)+1);
        strcpy(next, str);
    }
    if(next==NULL || strlen(next)==0) return NULL;
    int i=0;
    while(*next!='\0' && *next!=delimiter){
        token[i++]=(*next);
        next++;
    }
    token[i]='\0';
    if(*next==delimiter) *next++;
    if(strlen(token)>0){
        ret_token=(char*)malloc(strlen(token)+1);
        strcpy(ret_token, token);
        return ret_token;
    }
    return NULL;
}
int main(){
    char str[100]="Hello, World! This is a test.";
    char *token = strtoken(str, ' ');
    while(token != NULL){
        printf("%s\n", token);
        free(token);
        token = strtoken(NULL, ' ');
    }
    return 0;
}