#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if(n%5 == 0 && n%3 ==0){
            printf("Fizzbuzz");
    }
    else if (n % 5 == 0){
            printf("fizz");
    }
    else if (n % 3 == 0){
        printf("Buzz");
    }
    else{
    printf("Exit");
    }
return 0;
}


