#include <stdio.h>
#include <stdlib.h>
#define cube(a) a*a*a
#define swap(t,a,b) t=a;a=b;b=t;
#define max(a,b) a>b ?a:b;
int main(){
    int a=10;
    int b=20;
    int t=0;
    if(a>b) swap(t,a,b);
    printf("%d %d\n", a, b);
    int c=cube(b+2);
    printf("%d\n", c);
    int d=max(a++, b++);
    printf("%d %d %d\n", d, a, b);
    return 0;
}