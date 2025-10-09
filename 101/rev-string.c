#include <stdio.h>
#include <string.h>
void rev_string(char *str){
    char *start= str;
    char *end= str;
    while(*end!='\0') end++;
    end--;
    while(start<end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("Reversed: %s", str);
}
int main(int argc, char *argv[]){
    char str[100]="";
    if(argc<2){
        printf("Usage: %s <string to reverse>", argv[0]);
        printf("  or enter a line manually\n");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str,"\n")]=0;
    }
    else{
        for(int i=1;i<argc;i++){
            strcat(str, argv[i]);
            if(i!=argc-1) strcat(str, " ");
        }
    }
    rev_string(str);
    return 0;
}