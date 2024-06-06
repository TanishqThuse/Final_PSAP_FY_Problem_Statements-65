// E02 
// Write a C program to read an 8-bit binary number 
// as  a  string,  then  print  the  bits  between  given 
// positions using C program. 
// Test Case: 
// Enter the BYTE: 11001100 
// Enter the positions p1 and p2: 2 7 
// Bits between positions 2 and 7 are: 0 0 1 1 0 0
#include<stdio.h>
#include<stdlib.h>

int main(){
    char binary[9];
    int p1, p2;
    printf("Enter the BYTE: ");
    scanf("%s", binary);
    printf("Enter the positions p1 and p2: ");
    scanf("%d %d", &p1, &p2);
    for(int i = p1; i <= p2; i++){
        printf("%c \n", binary[i]);
    }
    return 0;
}