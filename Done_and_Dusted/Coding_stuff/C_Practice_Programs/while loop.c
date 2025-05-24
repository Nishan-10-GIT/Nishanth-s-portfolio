#include<stdio.h>
int main(){
    int row, sum = 0;
    int i=1, odd = 0 ;
    //printf("enter the number of lines :  ");
    //scanf("%d", &row);
    while (i<=10){
        printf("The elments are : %d \n", i);
        sum+=i; i++;
        if(i%2 != 0){
            printf("the odd numbers are : %d \n",i);
            odd+=i;
        }
    }
    printf(" the sum is : %d \n", sum);
    printf(" the odd number is : %d \n", odd);
}
