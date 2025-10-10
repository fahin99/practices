#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char str[100], sub[100];
    scanf("%s %s", str, sub);
    int count=0, n=strlen(str), m=strlen(sub);
    for(int i=0;i<=n-m;i++){
        if(str[i]==sub[0]){
            int j;
            for(j=0;sub[j]!='\0';j++){
                if(str[i+j]!=sub[j]) break;
            }
            if(sub[j]=='\0'){
                count++;
            }
        }
    }
    if(count) printf("%d times found\n", count);
    else printf("None found\n");
}