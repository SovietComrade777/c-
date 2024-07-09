#include<stdio.h>
int main(int argc, char const *argv[])
{   int k=1;
    int arr[7];
    printf("Input the first number of the array:");
    scanf("%d",&arr[0]);
    printf("n[0] = %d\n",arr[0]);
    for(int i =1;i<7;i++){
        arr[i]=3*arr[i-1];
        printf("n[%d] = %d\n",i+1,arr[i]);
    }
    return 0;
}
