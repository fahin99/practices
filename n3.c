#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Your code here
    int m,n;
    scanf("%d %d", &m, &n);
    int **a=(int**)malloc(m*sizeof(int*));
    if(a==NULL){
        printf("Memory allocation failed\n");
        free(a);
        return -1;
    }
    for(int i=0; i<m; i++) {
        *(a+i) = (int*)malloc(n * sizeof(int));
        if(*(a+i)== NULL) {
            printf("Memory allocation failed\n");
            for(int j = 0; j < i; j++) {
                free(*(a+j));
            }
            free(a);
            return -1;
        }
        for(int j = 0; j < n; j++) {
            scanf("%d", (*(a+i)+j));
        }
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<m-1;j++){
            for(int i=0;i<m-j-1;i++){
                if(*(*(a+i)+k)>*(*(a+i+1)+k)){
                    int temp = *(*(a+i)+k);
                    *(*(a+i)+k) = *(*(a+i+1)+k);
                    *(*(a+i+1)+k) = temp;
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",*(*(a+i)+j));
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        free(*(a+i));
    }
    free(a);
    return 0;
}