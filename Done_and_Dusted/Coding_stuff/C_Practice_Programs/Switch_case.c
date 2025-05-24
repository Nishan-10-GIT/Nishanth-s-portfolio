#include<stdio.h>

int main(){
    int input,a,b;
    char name[20];
    printf("Enter your name da mandaiya :");
    scanf("%s", &name);
    printf("Welcome to the calculator app Mr. %s : \n", name);
    printf("What operation do you wanna perform? \n");
    printf("1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n");
    scanf("%d", &input);
    printf("Enter the two numbers you wanna perform :  \n");
    scanf("%d %d", &a, &b );

    switch(input){

    case 1:
        printf("the sum is : %d\n" , a+b);
        break;
    case 2:
        printf("the difference is : %d\n" , a-b);
        break;
    case 3:
        printf("the sum is : %d\n" , a*b);
        break;
    case 4:
        printf("the quotient is : %d\n" , a/b);
        printf("the remainder is : %d\n" , a%b);
        break;
    }
}
