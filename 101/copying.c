#include <stdio.h>
#include <stdlib.h>
int main(){
    char *c=(char*)malloc(100*sizeof(char));
    if(c==NULL){
        fprintf(stderr,"Cannot allocate memory\n");
        return 1;
    }
    FILE *fp=fopen("input.text", "r");
    if(fp==NULL){
        fprintf(stderr,"Cannot open file\n");
        return 1;
    }
    FILE *fp2=fopen("output.text", "w");
    if(fp2==NULL){
        fprintf(stderr,"Cannot open file\n");
        return 1;
    }
    while(fscanf(fp, "%[^\n]", c)!=EOF){
        fprintf(fp2, "%s\n", c);
    }
    fclose(fp);
    fp=fopen("input.text", "r");
    if(fp==NULL){
        fprintf(stderr,"Cannot open file\n");
        return 1;
    }
    while(fscanf(fp, "%[^\n]", c)!=EOF){
        fprintf(fp2, "%s\n", c);
    }
    fclose(fp);
    fclose(fp2);
    free(c);
    return 0;
}