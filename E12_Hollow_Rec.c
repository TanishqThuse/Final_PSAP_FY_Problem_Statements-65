/*E12 
Write a C program for 'Hollow Rectangle' Pattern.*/
#include<stdio.h>

int main(){
    printf("Enter rows and coloums respectively : ");
    int rows, coloumns;
    scanf("%d %d", &rows, &coloumns);
    for(int i=0; i<rows ; i++){
        for(int j=0; j<coloumns; j++){
            if(i==0 || i==rows-1 || j==0 || j==coloumns-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}