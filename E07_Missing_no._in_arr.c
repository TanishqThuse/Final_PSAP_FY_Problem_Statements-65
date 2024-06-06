/*E07 
Write a C program to find the missing number in 
the  array.  (Take  sequential  array  and  find  the 
missing number)*/

//I don't understand the problem state,emt so I am going to write a program that takes an array of n elements and finds the missing number in the array form 1 to n

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in arr from 1 to n\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int total = n*(n+1)/2;
    if(total-sum!=0)
    printf("The missing number is: %d\n", (total-sum));
    else
    printf("No missing number\n");
    return 0; 
}