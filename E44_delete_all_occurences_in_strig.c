/*E44 
Write a c program to Delete all occurrences of 
Character from the String. 
Test case: Computer_engineering 
Enter character to delete: e 
Output: Computr nginring*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[100];
    printf("Enter the string : \n");
    fgets(str, sizeof(str), stdin);
    char ch;
    printf("Enter the character to delete : \n");
    scanf("%c", &ch);
    for(int i=0; str[i] != '\n' ; i++){
        if(str[i] != ch){
            printf("%c", str[i]);
        }
    }
    printf("\n");
}

