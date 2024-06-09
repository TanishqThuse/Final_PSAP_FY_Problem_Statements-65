/*E18 
Write a C program to delete prime numbers from 
an array*/
#include <stdio.h>
#include <stdlib.h>
// #include <bool.h>

void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int isPrime(int n){

    if(n==1){
        return 0;
    }

    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            return 0; //1 -> true , 0 -> false
        }
    }
    return 1;
}

int main(){
    printf("Enter the size of the array: ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements in the array : ");
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array is: ");
    printArr(arr, n);
    printf("The array after deleting prime numbers is: ");
    for(int i=0; i<n; i++){
        if(!isPrime(arr[i])){
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

}