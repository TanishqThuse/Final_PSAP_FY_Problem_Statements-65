/*E19 
Write C program to read n strings and print each string's 
length. */

//We can add fgets to improve it to take input for whitespaces as well
//Just remember that fgets has '/n' at the end of the string and we can change it to '/0' to remove it

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    printf("Enter number of strings: ");
    int n;
    scanf("%d", &n);
    printf("Input the strings: \n");
    char str[n][100]; //i want to learn how to use speacial feature of a 2 D array
    for(int i=0; i<n; i++){
        scanf("%s", str[i]);
    }

    for(int i=0 ; i<n ; i++){
        printf("The length of string %s is %d\n", str[i], strlen(str[i]));
    }
}