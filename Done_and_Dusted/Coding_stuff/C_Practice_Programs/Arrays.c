#include<stdio.h>
int main(){
    int sub;
    char choice;
    printf("Enter the number of subjects : ");
    scanf("%d", &sub);
    int mark[sub];
    printf("Enter %d subjects bro \n", sub);
    for (int i=0; i<sub; i++){
        scanf("%d", &mark[i]);
    }
    printf("Numbers stored successfully !!!");

    for (int i=0; i<sub; i++){
        printf("The marks you have entered is : %d \n", mark[i]);
        }

    printf(" \n Do you Want to change your marks? y or n \n");
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y'){
        printf(" -------Here are the marks as of right now ----- \n");
        for (int i =0; i<sub; i++){
            printf("%d \n", mark[i]);
        }
    else if (choice == 'n' || choice 'N'){
        printf("Thank you for choosing us byeee \n");
    }
    else{
        printf("Invalid answer please give me a valid answer \n");
    }
    }







    return 0;
}
