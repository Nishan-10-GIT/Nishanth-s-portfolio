/*#include <stdio.h>

int binary(int arr[], int n, int target){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};  // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = binary(arr, n, target);
    if (result == -1)
        printf("Target not found\n");
    else
        printf("Target %d found at index %d\n", target, result);

    return 0;
}*/

#include<stdio.h>

int linear(int arr[], int n, int target){
    for (int i=0; i<n; i++){
        if (i==target) return i;
        else return -1;
    }
}

int main() {
    int arr[] = {12, 34, 54, 23, 56, 78, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 56;

    int result = linearSearch(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
