#include <stdio.h>

int inequal(int x, int y){
    return !!(x^y);
}
int main(){
    printf("5 != 5: %d\n", inequal(5, 5)); 
    printf("5 != 10: %d\n", inequal(5, 10)); 
    printf("0 != 0: %d\n", inequal(0, 0)); 
    printf("100 != -100: %d\n", inequal(100, -100)); 
}