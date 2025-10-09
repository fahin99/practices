#include <stdio.h>
#include <stdlib.h>

char *concat(char *a, char *b){
    char *p, *q;
    int n=0;
    q=a;
    while(*q){
        q++;
        n++;
    }
    q=b;
    while(*q){
        q++;
        n++;
    }
    p=q=malloc(n+1);
    if(p==NULL) return NULL;
    while(*a) *p++=*a++;
    while(*b) *p++=*b++;
    *p='\0';
    return q;
}

int main(){
    char a[100], b[100];
    printf("Enter first string: ");
    scanf("%s", a);
    printf("Enter second string: ");
    scanf("%s", b);
    char *result = concat(a, b);
    if(result == NULL){
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("Concatenated string: %s\n", result);
    free(result);
    return 0;
}