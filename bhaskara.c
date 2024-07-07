//Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    float x1,x2,d;
    printf("Input the first number(a):");
    scanf("%d",&a); 
    printf("Input the second number(b):");
    scanf("%d",&b);
    printf("Input the third number(c):");
    scanf("%d",&c);
    d=sqrt((b*b)-(4*a*c));
    if(d<0){
        printf("Roots will be imaginary");
    }
    else if(d==0){
        x1=-b/2*a;
        printf("Root1 = %f\nRoot2 = %f",x1,x1);
    }
    else{
        x1=(-b+d)/(2*a);
        x2=(-b-d)/(2*a);
        printf("Root1 = %f\nRoot2 = %f",x1,x2);    
    }
    return 0;
}
