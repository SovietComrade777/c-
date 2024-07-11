#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("Input value of x:");
    scanf("%f",&a);
    printf("Value of sin(1/x) is %.04f",sin(1/a));
    return 0;
}
