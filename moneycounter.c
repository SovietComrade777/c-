/*Write a C program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.*/
#include<stdio.h>
int main(){
    int amt;
    int hd;
    printf("Input the amount:");
    scanf("%d",&amt);
    hd=amt/100;
    printf("%d Note(s) of 100.00\n",hd);
    amt=amt-(hd*100);
    hd=amt/50;
    printf("%d Note(S) of 50.00\n",hd);
    amt=amt-(hd*50);
    hd=amt/20;
    printf("%d Note(S) of 20.00\n",hd);
    amt=amt-(hd*20);
    hd=amt/10;
    printf("%d Note(S) of 10.00\n",hd);
    amt=amt-(hd*10);
    hd=amt/5;
    printf("%d Note(S) of 5.00\n",hd);    
    amt=amt-(hd*5);
    hd=amt/2;
    printf("%d Note(S) of 2.00\n",hd);
    amt=amt-(hd*2);
    hd=amt/1;
    printf("%d Note(S) of 1.00",hd);
    return 0;
}
