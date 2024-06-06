// E01 
// Counting  number  of  1's  using  C  program  (First 
// convert  decimal  number  to  binary  and  count 
// number of 1’s) 
// Test Case: 
// Enter number: 10 
// Number of 1’s are: 2

#include<stdio.h>
#include<stdlib.h>

int convertBinary(int num){
    int bin=0; 
    int rem;
    int base = 1;
    while(num>0){
        rem = num % 2;
        // how does it work if rem = 0 
        bin = bin + rem * base;
        num = num / 2;
        //the answer is the below statement itself
        /*If number is 2 : then 2%2 = 0 , BUT base = 2 and num =1 and rem = 0 , sum = 0;
        but since now the base = 2, rem  = 1, bin = 0 + 1*10 = 10 , and we give 10 as output
        so here base = */
        base = base * 10;
    }
    return bin;
}

int count1s(int num){
    int count = 0;
    while(num>0){
        if(num%10 == 1){
            count++;
        }
        num = num/10;
    }
    return count;
}

int main(){
    int num, count = 0;
    printf("Enter number: ");

    scanf("%d", &num);

    num = convertBinary(num);
    // printf("Binary number is: %d\n", num);

    printf("The number of 1's are : %d\n",count1s(num));
    return 0 ;
}

















