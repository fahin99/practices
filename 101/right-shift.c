#include<stdio.h>

int main(){
    int a = 20, n=2; // Binary: 0001 0100
    unsigned int b=a;
    int mask=(~(~0<<n)&a)<<(sizeof(a)*8-n);
    printf("right circular shift of %d by %d is %d\n",a,n,(a>>n)|mask);
    return 0;
}