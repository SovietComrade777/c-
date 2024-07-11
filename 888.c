#include<stdio.h>
int main(){
    int arr[99];
    int j;
    for(int i=0;i<99;i++){
        printf("<%d>:",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]>=888){
            j=i;
            break;
        }
    }
    float avg=0;
    for(int i=0;i<j;i++){
        avg+=arr[i];
    }
    avg/=j;
    printf("The average of said numbers is :%f",avg);
    return 0;
}
