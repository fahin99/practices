#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void insert_elem(int* arr, int target, int idx, int size){
    int *new_arr=(int*)malloc((size+1)*sizeof(int));
    if(new_arr==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    for(int i=0;i<idx;i++){
        *(new_arr+i)=*(arr+i);
    }
    *(new_arr+idx)=target;
    for(int i=idx+1;i<size+1;i++){
        *(new_arr+i)=*(arr+i-1);
    }
    free(arr);
    arr=(int*)malloc((size+1)*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed\n");
        free(new_arr);
        return;
    }
    for(int i=0;i<size+1;i++){
        *(arr+i)=*(new_arr+i);
    }
    free(new_arr);
}
int main(){
    int *arr=(int*)malloc(5*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<5;i++){
        *(arr+i)=i+1;
    }
    int size=5;
    int target=10;
    int idx=2;
    insert_elem(arr, target, idx, size);
    for(int i=0;i<size+1;i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
    return 0;
}