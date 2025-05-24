#include<stdio.h>
int main(){
    int n, ans;
    printf("What table do you want bro? : ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++){
        ans = i*n;
        if (ans%2 == 0){
            printf("%d x %d = %d \n", n,i, ans);
        }

    }

}
