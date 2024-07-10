#include<stdio.h>
int main(){
    float bmi;
    float weight,height;
    printf("Enter Weight(kg):");
    scanf("%f",&weight);
    printf("Enter Height(m):");
    scanf("%f",&height);
    bmi=weight/(height*height);
    printf("%f \n",bmi);
    if(bmi<18.5){
        printf("Grade:Underweight");
    }
    else if(bmi>=18.5 && bmi<=24.9){
        printf("Grade:Normal Weight");
    }
    else{
        printf("Grade:Overweight");
    }
    return 0;
}
