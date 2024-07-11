#include<stdio.h>
int main(){
    int r;
    printf("Input number of histogram bar(Maximum 10):");
    scanf("%d",&r);
    int arr[r];
    printf("Input the values between 0 and 10(seperated by space)\n");
    for(int i=0;i<r;i++){
        scanf("%d",&arr[i]);
    }
    printf("Histogram\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<arr[i];j++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
