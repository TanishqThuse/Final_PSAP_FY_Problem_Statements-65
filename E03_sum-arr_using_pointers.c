// E03 
// Write a C program to calculate the sum of array 
// elements using pointers as an argument.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0 ;
    int *ptr = &arr[0];
    while(ptr < &arr[n]) //also the condition ptr <= &arr[n-1] is  great
    {   
        sum += *ptr;
        ptr++;
    }
    printf("The sum is : %d\n", sum);
}