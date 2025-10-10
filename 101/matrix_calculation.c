#include<stdio.h>
#include<stdlib.h>

int **create_mat(int row, int col){
    int **ans=(int**)malloc(row*(sizeof(int*)));
    if(ans==NULL){
        printf("Failed row allocation\n");
        return NULL;
    }
    for(int i=0;i<row;i++){
        *(ans+i)=(int*)malloc(col*sizeof(int));
        if(*(ans+i)==NULL){
            printf("Failed column allocation\n");
            for(int j=0;j<i;j++) free(*(ans+j));
            free(ans);
            return NULL;
        }
    }
    return ans;
}

int **summed_mat(int **mat_1, int **mat_2, int row1, int col1, int row2, int col2){
    if((row1^row2) || (col1^col2)){
        printf("Size doesn't align for sum\n");
        return NULL;
    }
    int **ans=(int**)malloc(row1*sizeof(int*));
    if(ans==NULL){
        printf("Failed row allocation\n");
        return NULL;
    }
    for(int i=0;i<row1;i++){
        *(ans+i)=(int*)malloc(col1*sizeof(int));
        if(*(ans+i)==NULL){
            printf("Failed collumn allocation\n");
            for(int j=0;j<i;j++) free(*(ans+j));
            free(ans);
            return NULL;
        }
        for(int j=0;j<col1;j++){
            *(*(ans+i)+j)=*(*(mat_1+i)+j)+*(*(mat_2+i)+j);
        }
    }
    return ans;
}

int **subtract_mat(int **mat_1, int **mat_2, int row1, int col1, int row2, int col2){
    if((row1^row2) || (col1^col2)){
        printf("Size doesn't align for substract\n");
        return NULL;
    }
    int **ans=(int**)malloc(row1*sizeof(int*));
    if(ans==NULL){
        printf("Failed row allocation\n");
        return NULL;
    }
    for(int i=0;i<row1;i++){
        *(ans+i)=(int*)malloc(col1*sizeof(int));
        if(*(ans+i)==NULL){
            printf("Failed collumn allocation\n");
            for(int j=0;j<i;j++) free(*(ans+j));
            free(ans);
            return NULL;
        }
        for(int j=0;j<col1;j++){
            *(*(ans+i)+j)=*(*(mat_1+i)+j)-*(*(mat_2+i)+j);
        }
    }
    return ans;
}

int **multiply_mat(int **mat_1, int **mat_2, int row1, int col1, int row2, int col2){
    if((col1^row2)){
        printf("Size doesn't align for multiply\n");
        return NULL;
    }
    int **ans=(int**)malloc(row1*sizeof(int*));
    if(ans==NULL){
        printf("Failed row allocation\n");
        return NULL;
    }
    for(int i=0;i<row1;i++){
        *(ans+i)=(int*)malloc(col2*sizeof(int));
        if(*(ans+i)==NULL){
            printf("Failed collumn allocation\n");
            for(int j=0;j<i;j++) free(*(ans+j));
            free(ans);
            return NULL;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            int sum=0;
            for(int k=0;k<col1;k++){
                sum+=(*(*(mat_1+i)+k))*(*(*(mat_2+k)+j));
            }
            *(*(ans+i)+j)=sum;
        }
    }
    return ans;
}

void scan_mat(int **mat, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",*(mat+i)+j);
        }
    }
}

void free_mat(int **mat, int row, int col){
    for(int i=0;i<row;i++){
        free(*(mat+i));
    }
    free(mat);
}

void print_mat(int **mat, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",*(*(mat+i)+j));
        }
        printf("\n");
    }
}

int main(){
    int row1, col1, row2, col2;
    scanf("%d %d %d %d", &row1, &col1, &row2, &col2);
    int **mat_1=create_mat(row1, col1);
    int **mat_2=create_mat(row2, col2);
    scan_mat(mat_1, row1, col1);
    scan_mat(mat_2, row2, col2);
    int **sum_mat=summed_mat(mat_1, mat_2, row1, col1, row2, col2);
    if(sum_mat!=NULL){
        print_mat(sum_mat, row1, col1);
        free_mat(sum_mat, row1, col1);
    }
    int **sub_mat=subtract_mat(mat_1, mat_2, row1, col1, row2, col2);
    if(sub_mat!=NULL){
        print_mat(sub_mat, row1, col1);
        free_mat(sub_mat, row1, col1);
    }
    int **mul_mat=multiply_mat(mat_1, mat_2, row1, col1, row2, col2);
    if(mul_mat!=NULL){
        print_mat(mul_mat, row1, col2);
        free_mat(mul_mat, row1, col2);
    }
    free_mat(mat_1, row1, col1);
    free_mat(mat_2, row2, col2);
    return 0;
}