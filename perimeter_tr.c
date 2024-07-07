// Write a C program that reads three floating-point values and checks if it is possible to make a triangle with them. Determine the perimeter of the triangle if the given values are valid
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Input the first number ",a);
    scanf("%d",&a);
    printf("Input the second number ",b);
    scanf("%d",&b);
    printf("Input the third number ",c);
    scanf("%d",&c);    
    if(a+b>c && a+c>b && b+c>a){
        printf("The perimeter is %d",a+b+c);
    }
    else{
        printf("Wrong input");
    }
    return 0;
}
