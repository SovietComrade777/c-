//Write a C program to check if two numbers in a pair are in ascending order or descending order
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first number of the pair");
    scanf("%d",&a);
    printf("Enter the second number of the pair");
    scanf("%d",&b);
    if(a>b){
        printf("Descending order");
    }
    else if(a<b){
        printf("Ascending Order");
    }
    else{
        printf("Equal");
    }
    return 0;
}
