#include <stdio.h>
#include <stdlib.h>

int main(){
    int m,n;
    scanf("%d %d", &m,&n);
    int **a=(int**)malloc(m*sizeof(int*));
    if(a==NULL){
        printf("memory allocation failed!");
        free(a);
        return 0;
    }
    for(int i=0;i<m;i++){
        *(a+i)=(int*)malloc(n*sizeof(int));
        if(*(a+i)==NULL){
            printf("memory allocation failed!");
            for(int j=0;j<=i-1;j++) free(*(a+j));
            free(a);
            return 0;
        }
        for(int j=0;j<n;j++){
            scanf("%d", (*(a+i)+j));
        }
    }
    int k;
    scanf("%d", &k);
    int **b=(int**)malloc(k*sizeof(int*));
    if(b==NULL){
        printf("failed allocation");
        free(b);
        return 0;
    }
    for(int i=0;i<k;i++){
        *(b+i)=(int*)malloc(k*sizeof(int));
        if(*(b+i)==NULL){
            printf("memory allocation failed!");
            for(int j=0;j<=i-1;j++) free(*(b+j));
            free(b);
            return 0;
        }
        for(int j=0;j<k;j++){
            scanf("%d", (*(b+i)+j));
        }
    }
    
    int **c=(int**)malloc((m-k+1)*sizeof(int*));
    if(c==NULL){
        printf("failed allocation");
        free(c);
        return 0;
    }
    for(int i=0;i<m-k+1;i++){
        *(c+i)=(int*)malloc((n-k+1)*sizeof(int));
        if(*(c+i)==NULL){
            printf("failed allocation");
            for(int j=0;j<=i-1;j++) free(*(c+j));
            free(c);
            return 0;
        }
        
        for(int j=0;j<n-k+1;j++){
            int s=0;
            for (int p = 0; p < k; p++) {
                for (int q = 0; q < k; q++) {
                    s += *(*(a+i+p)+j+q) * *(*(b+p)+q);
                }
            }
            *(*(c+i)+j)=s;
        }
        
    }
    for(int i=0;i<m-k+1;i++){
        for(int j=0;j<n-k+1;j++) printf("%d ", *(*(c+i)+j));
        printf("\n");
    }
    for(int i=0;i<m-k+1;i++){
        free(*(c+i));
    }
    free(c);
    for(int i=0;i<k;i++){
        free(*(b+i));
    }
    free(b);
    for(int i=0;i<m;i++){
        free(*(a+i));
    }
    free(a);
}