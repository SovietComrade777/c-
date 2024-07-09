#include<stdio.h>
int main(){
    int arr[6];
    for(int i=0;i<6;i++){
        printf("Enter arr[%d] element",i);
        scanf("%d",&arr[i]);
    }
    int j=0;
    int min;
    for(int i=0;i<6;i++){
        if(min<arr[i]){
            min=arr[j];
        }
        else{
            j=i;
            min=arr[i];
        }
    }
    printf("min:%d",min);
    return 0;
}
