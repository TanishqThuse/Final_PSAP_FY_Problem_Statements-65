/*E17 
Perform following operations on 2D Matrix: 
1. Accept  number  of  rows  and  columns  of  two 
matrices and read elements of both matrices. 
2. Print Transpose of both matrices. 
3. Print Diagonal elements of both matrices --> Assume both matrix are 3x3*/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

// void readElements(int arr[][], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }


int main(){
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("Enter the elements of the matrix: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            // printf("Enter the element at %d row and %d column: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    // printf("The matrix is: \n");
    // readElements(arr, row, col);
    printf("The matrix is: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    printf("The transpose of the matrix is: \n");
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }

    //The diagonal elements are: 
    printf("The diagonal elements are: \n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                printf("%d ", arr[i][j]);

            }
        }
    }
            printf("\n");

     for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(i==j){
                printf("%d ", arr[i][j]);
            }
        }
    }


    return 0;
}