#include <stdio.h>
#include <stdlib.h>

int **multiply(int **a, int **b, int size){
    int **result=(int**)malloc(size*sizeof(int*));
    if(result==NULL){
        printf("Memory allocation failed\n");
        exit(-1);
    }
    for(int i=0;i<size;i++){
        result[i]=(int*)malloc(size*sizeof(int));
        if(result[i]==NULL){
            printf("Memory allocation failed\n");
            for(int j=0;j<i;j++){
                free(result[j]);
            }
            free(result);
            exit(-1);
        }
        for(int j=0;j<size;j++){
            result[i][j]=0;
            for(int k=0;k<size;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    return result;
}
int main(){
    int m;
    printf("Enter size of matrices:");
    scanf("%d",&m);
    int **arr=(int**)malloc(m*sizeof(int*));
    if(arr==NULL){
        printf("Memory allocation failed\n");
        return -1;
    }
    printf("\nEnter first matrix:\n");
    for(int i=0;i<m;i++){
        arr[i]=(int*)malloc(m*sizeof(int));
        if(arr[i]==NULL){
            printf("Memory allocation failed\n");
            for(int j=0;j<i;j++){
                free(arr[j]);
            }
            free(arr);
            return -1;
        }
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nEnter second matrix:\n");
    int **brr=(int**)malloc(m*sizeof(int*));
    if(brr==NULL){
        printf("Memory allocation failed\n");
        return -1;
    }
    for(int i=0;i<m;i++){
        brr[i]=(int*)malloc(m*sizeof(int));
        if(brr[i]==NULL){
            printf("Memory allocation failed\n");
            for(int j=0;j<i;j++){
                free(brr[j]);
            }
            free(brr);
            return -1;
        }
        for(int j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    int **result=multiply(arr,brr,m);
    printf("\nResultant matrix after multiplication:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        free(arr[i]);
        free(brr[i]);
        free(result[i]);
    }
    free(arr);
    free(brr);
    free(result);
}