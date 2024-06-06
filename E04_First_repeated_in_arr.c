// 04 
// Write  a  C  program  to  find  the  first  repeated 
// element in an array.
#include<stdio.h>
#include<stdlib.h>

int main(){

    printf("Enter the number of elements: ");
    int n;
    scanf("%d",&n);
    printf("Enter elements in arr\n");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                printf("The first repeated element is: %d\n", arr[i]);
                flag = 1;
                break;
            }
        }
    }
    if(flag==0){
        printf("No repeated element found\n");
    }

    return 0;
}