/*E11 
Write a C program to find the intersection of two 
arrays*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1, n2;
    printf("Enter the number of elements in 1st array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements in 1st array\n");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elements in 2nd array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements in 2nd array\n");
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }
    printf("Intersection of 2 arrays: ");
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i] == arr2[j]){
                printf("%d ", arr1[i]);
            }
        }
    }
    printf("\n");
    printf("Using Linear search with time complexity O(n^2)");
    return 0;
}