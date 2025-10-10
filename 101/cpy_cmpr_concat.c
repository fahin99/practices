#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cpy(char *dest, char *src){
    while(*src!='\0'){
        *dest++=*src++;
    }
    *dest='\0';
}
int cmpr(char *str1, char *str2){
    while(*str1==*str2){
        if(*str1=='\0') return 0;
        str1++;
        str2++;
    }
    if(*str1>*str2) return 1;
    else return -1;
}

void concat(char *dest, char *src){
    while(*dest!='\0') dest++;
    while(*src!='\0'){
        *dest++=*src++;
    }
}
int main(){
    char s1[50], s2[50];
    fgets(s1, 49, stdin);
    fgets(s2, 49, stdin);
    s1[strcspn(s1, "\n")]='\0';
    s2[strcspn(s2, "\n")]='\0';
    int flag=cmpr(s1, s2);
    if(flag==0) printf("Equal\n");
    else if(flag==-1) printf("Latter one is greater\n");
    else{
        printf("Former one is greater\n");
    }
    char s3[100]={};
    concat(s3, s1);
    concat(s3, s2);
    printf("%s\n", s3);
    cpy(s1, s2);
    flag=cmpr(s1, s2);
    if(flag==0) printf("Equal\n");
    else if(flag==-1) printf("Latter one is greater\n");
    else{
        printf("Former one is greater\n");
    }
    printf("%s\n %s\n", s1, s2);
    return 0;
}