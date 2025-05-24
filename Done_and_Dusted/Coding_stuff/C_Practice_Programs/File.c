#include<stdio.h>
int main(){
    FILE *fptr = fopen("welcome.txt","w");
    if(fptr==NULL){
        printf("Invalid\n");
        return 0;
    }
    else{
        fprintf(fptr,"Hello world");
        fclose(fptr);
        printf("----------- Successs ----------");
    }
}
