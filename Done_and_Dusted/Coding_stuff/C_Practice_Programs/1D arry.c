#include<stdio.h>

void init_stack(char name){
    int n;
    printf("Enter the number of elements in the stack");
    scanf("%d", @n);
    name[]=len(n)
}

int main()








































/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements to be in the array :");
    scanf("%d", &n);
    int data[n];
    for (int i=0; i<n ;i++){
        printf("\n lets initialize the array, enter the %d element :  ", i-1);
        scanf("%d", &data[i]);
    }
    printf("-----Successfully initialized------ \n");

    int min, max, asc, desc;
    min = data[0];
    for(int i=0; i<n; i++){
        if (data[i]<min) min=data[i];
    }
    printf("--------the minimum element is %d ------\n", min);

    max=data[0];
    for(int i = 0; i<n; i++){
        if(data[i]>max) max = data[i];
    }
    printf("-------the maximum value of the array is %d ------- \n", max);

    for(int i = 0; i<n; i++){
        if(data[i]<data[i+1]) data[i]=data[i];
        else data[i] = data[i+1];
    }
    printf("--------The new array arranged in the ascending order is : ");
    for(int i = 0; i<n; i++) printf("%d", data[i]);

    printf("\n ----------end of program ------\n");

    return 0;

}

