#include<stdio.h>

int main(){
    int n;
    printf("Enter the numbers to be printed till : ");
    scanf("%d", &n);
    printf("The numbers are...\n");
    int sum =0;

    for(int i=1; i<=n; i++){
    printf("%d \n", i);
    sum+=i;
    }

    printf("The sum is : %d \n", sum);
    return 0;

}
