#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,*ptr,i;
    printf("Enter the Number of elements : ");
    scanf("%d",&n);

    ptr = (int *) malloc(n*sizeof(int));
    if (ptr != NULL){
        for(i=0;i<n;i++){
        printf("Enter the element at %d position : ",i);
        scanf("%d",ptr+i);
        }
        printf("The array is filled successfully...\n");
    }

    for(i=0;i<n;i++){
        printf("Element %d is : %d\n",i+1,*(ptr+i));
    }
    free(ptr);

}
