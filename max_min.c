#include<stdio.h>
int main(){
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("<%d>",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<4;i++){
        if(min<arr[i]){
            max=arr[i];
        }
        else if (min>arr[i])
        {
            min=arr[i];
        }
        else{
            continue;
        }
        
    }
    printf("Diffrence is %d",max-min);
    return 0;
}
