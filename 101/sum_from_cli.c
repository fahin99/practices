#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include<string.h>
int getTotalSum(int argc, ...) {
    va_list args;
    va_start(args, argc);
    char *type=va_arg(args, char*);
    int total_sum = 0;
    while(argc--){
        for(int i=0;i<strlen(type);i++){
            if(type[i]=='i'){
                total_sum+=va_arg(args, int);
            }
            else if(type[i]=='c'){
                total_sum+=va_arg(args, int);
            }
            else if(type[i]=='s'){
                char *str=va_arg(args, char*);
                for(int j=0;str[j]!='\0';j++){
                    total_sum+=str[j];
                }
            }
        }
    }

    va_end(args);
    return total_sum;
}
int main() {
    int total_sum=getTotalSum(2,"sicc", "I am confident", 2, 'p', 'a', "i will pass", 3, 'p', 'b');
    printf("Total Sum: %d\n", total_sum);
    total_sum=getTotalSum(2, "ic", 10, 'A', 20, 'a');
    printf("Total Sum: %d\n", total_sum);
    return 0;
}