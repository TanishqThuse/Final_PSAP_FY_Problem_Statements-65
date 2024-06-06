/*08 
Write  a  C  program  to  find  the  sum  of  Natural 
Number/Factorial of Number of all natural 
numbers from 1 to N
Series: 1/1! + 2/2! + 3/3! + 4/4! + ... N/N!
*/

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
    // long double sum = 0;
    int sum = 0 ;
    for(int i=1 ; i<= n; i++){
        // sum += i/fact(i);
        sum = sum + fact(i);
    }
    // printf("The sum of facts from 1 to %d is %llf and size %d\n", n, sum, sizeof(sum));
    printf("The sum of facts from 1 to %d is %d and size %d\n", n, sum, sizeof(sum));
}