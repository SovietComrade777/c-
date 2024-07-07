#include<stdio.h>
//Write a C program that reads 5 numbers and sums all odd values between them
#include<math.h>
int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        printf("Input the %d number:\n",i+1);
        scanf("%d",&arr[i]);
    }
    int o=0;
    for (int i=0;i<5;i++){
        if(arr[i]%2!=0){
            o+=arr[i];
        }
        else{
            continue;
        }
    }
    printf("Sum of all odd values:%d",o);




    return 0;
}
