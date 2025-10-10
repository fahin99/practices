#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include <string.h>
int main(){
    FILE *fp=fopen("marks.txt","r+");
    if(fp==NULL){
        fprintf(stderr,"Cannot open file\n");
        return 1;
    }
    for(int i=0;i<10;i++){
        char name[50];
        int marks;
        scanf("%s",name);
        fprintf(fp, "%s ", name);

        for(int j=0;j<5;j++){
            scanf("%d", &marks);
            fprintf(fp, "%d ", marks);
        }
        fprintf(fp, "\n");
    }
    fseek(fp, 0, SEEK_SET);
    char best_name[50], worst_name[50];
    int best=INT_MIN, worst=INT_MAX;
    for(int i=0;i<10;i++){
        char name[50];
        int a,b,c,d,e;
        fscanf(fp, "%49s %d %d %d %d %d", name, &a, &b, &c, &d, &e);
        int total=a+b+c+d+e;
        if(total>best){
            best=total;
            strcpy(best_name, name);
        }
        if(total<worst){
            worst=total;
            strcpy(worst_name, name);
        }
    }
    fclose(fp);
    printf("%s obtained the best marks, %d\n", best_name, best);
    printf("%s obtained the worst marks, %d\n", worst_name, worst);
}