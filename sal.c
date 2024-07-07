// Write a C program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. Print the ID and salary (with two decimal places) of the employee for a particular month.
#include<stdio.h>
int main(){
    int id;
    int wrk_hr;
    int sal;
    printf("Input the Employees ID(Max. 10 chars)");
    scanf("%d",&id);
    printf("Input the working hrs:");
    scanf("%d",&wrk_hr);
    printf("Salary amount/hr:");
    scanf("%d",&sal);
    sal*=wrk_hr;
    printf("Employees ID=%d\n",id);
    printf("Salary = U$%d",sal);
    return 0;
}
