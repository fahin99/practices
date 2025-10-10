#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int *start;
int insertNode(int *tree, int x){
    if(*tree==-1){
        *tree=x;
        return 0;
    }
    int idx=tree-start;
    if(*tree<=x){
        return insertNode(tree+2*idx+1, x);
    }
    else{
        return insertNode(tree+2*idx, x);
    }
    return 0;
}

int main(){
    int *tree=(int*)malloc(100*sizeof(int));
    if(tree==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    start=tree;
    for(int i=0;i<100;i++) *(tree+i)=-1;
    int vals[]={5,3,8,1,4,7,9};
    for(int i=0;i<7;i++){
        insertNode(tree+1, vals[i]);
    }
    for(int i=0;i<15;i++){
        printf("%d %d\n", i, *(tree+i));
    }
    printf("\n");
    free(tree);
    return 0;
}