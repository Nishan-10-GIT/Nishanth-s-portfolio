#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr, size,i;
    printf("Enter the required number of elements in the array :");
    scanf("%d", &size);
    ptr=(int*)malloc(size * sizeof(int));
    if(ptr!=NULL){
        printf("Enter the number : \n");
        for(i=0;i<size;i++) scanf("%d",ptr+i);

        printf("The numbers are :");
        for (i=0;i<size;i++) printf("%d",*(ptr+i));
        free(ptr);9
    }
    return 0;
}







































/*#include<stdio.h>
int main(){
    int a[]={10,20,30,40,50};
    for(int i=0;i<5;i++) printf("Address of %d element is :%p, value : %d\n",i,(a+i),*(a+i));
    return 0;
}*/
