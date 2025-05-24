#include<stdio.h>

int main(){
int inp;
printf("ENTER THE INPUT NUMBER : ");
scanf("%d", &inp);
    if(inp % 2 == 0){
        printf("THE NUMBER IS A EVEN NUMBER...");
    }
    else{
        printf("THE NUMBER IS A ODD NUMBER...");
    }
    return 0;
}
