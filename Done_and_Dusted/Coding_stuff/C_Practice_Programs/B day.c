#include<stdio.h>
int main(){
    int in;
    printf("What was your bday month bro? \n 1. Jan \n 2. feb \n 3.March \n 4.April \n 5.May \n 6.june \n 7.july \n 8.August \n 9.Sept \n 10.oct \n 11.nov \n 12.Dec ");
    scanf("%d", &in);

    switch (in){
        case 1:
        printf("Your month is jan");
    break;

    case 2:
        printf("Your month is feb");
    break;

    case 3:
        printf("Your month is mar");
    break;

    case 4:
        printf("Your month is apr");
    break;

    case 5:
        printf("Your month is may");
    break;

    case 6:
        printf("Your month is june");
    break;

    case 7:
        printf("Your month is july");
    break;

    case 8:
        printf("Your month is August");
    break;

    case 9:
        printf("Your month is September");
    break;

    case 10:
        printf("Your month is october");
    break;

    case 11:
        printf("Your month is november");
    break;

    case 12:
        printf("Your month is december");
    break;

    default:
        printf("Enter a number between 1 and 12 bro");

    }


}
