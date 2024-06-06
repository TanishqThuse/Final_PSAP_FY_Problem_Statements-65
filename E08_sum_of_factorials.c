/*08 
Write  a  C  program  to  find  the  sum  of  Natural 
Number/Factorial of Number of all natural 
numbers from 1 to N*/

#include<stdio.h>

int fact(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    printf("Enter the number : ");
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1 ; i<= n; i++){
        sum += fact(i);
    }
    printf("The sum of facts from 1 to %d is %d\n", n, sum);
}