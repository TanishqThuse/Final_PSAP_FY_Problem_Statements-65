/*E05 
A) Write a C program to print alternate elements 
of the array 
B) Write a C program to print addition of 
alternate elements of the array.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in arr\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Alternate elements are: ");
    for(int i=0; i<n ; i=i+2){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    printf("Addition of alternate elements: ");
    int sum = 0;
    for(int i=0; i<n; i+=2){
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}