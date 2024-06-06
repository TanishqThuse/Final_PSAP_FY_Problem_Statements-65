/*E09 
Write a C program to copy vowels of one string to 
another and count copied characters.*/
#include<stdio.h>
int main(){
    char str1[100], str2[100];
    int count = 0 ;
    printf("Enter the string: ");
    scanf("%s", str1);
    char ch;// = "";
    int i=0;
    while(ch != '\0'){
        ch = str1[i];
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            str2[count] = ch;
            count++;
        }
        i++;
    }
    printf("New string is : %s\n", str2);
    printf("The count of vowels is : %d\n", count);
}