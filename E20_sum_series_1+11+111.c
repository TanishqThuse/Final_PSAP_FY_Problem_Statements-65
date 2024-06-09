/*E20 
Write a C program to calculate sum of the series 1 + 11 
+ 111 + 1111 + ... N terms*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int sum=0;
    int num = 1;
    int num_inc = 1;

    printf("The sum of the series : ");

    for(int i=0; i<n ;i++){
        if(i!=n-1)
        printf("%d + ", num);
        else
        printf("%d ", num);
        sum += num;
        num = num + pow(10,i+1);
        // num = num_inc;
    }
    printf("is %d\n", sum);
}