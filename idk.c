#include<stdio.h>
int main(){
    int a;
    printf("Input Seven Digit number: ");
    scanf("%d",&a);
    char arr[7];
    int temp,q=0;
    
    while(a!=0){
        temp=a%10;
        arr[q]=temp;
        a/=10;
        q++;
    }
    for(int i=6;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
