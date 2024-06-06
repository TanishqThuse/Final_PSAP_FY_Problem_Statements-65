/*E06 
Write a C program to print Fibonacci series up to 
n terms. 
Test Cases: No. of terms 10 
Output: 0,1,1,2,3,5,8,13,21,34*/

#include<stdio.h>
#include<stdlib.h>

int fibbonaci(int n){
    int a = 0, b = 1, c;
    printf("%d, %d, ", a, b);
    int sum = a+b;
    for(int i = 2; i<n; i++){
        c= a+b;
        a = b;
        b = c;
        sum = sum + b;
        printf("%d, ", c);
    }
    printf("\n");
    // if(n==0){
    //     return 0;
    // }
    // else if(n==1){
    //     return 1;
    // }


    return sum;
}

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("The sum of fibonnaci series upto n is : %d\n", fibbonaci(n));

    return 0;
}