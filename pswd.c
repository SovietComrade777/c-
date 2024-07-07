//Write a C program to read a password until it is valid. For wrong password print "Incorrect password" and for correct password print, "Correct password" and quit the program. The correct password is 1234.
#include<stdio.h>
int main(){
    int pass=1234;
    int ipass;
    printf("Give the passwords");
    scanf("%d",&ipass);
    if(ipass==pass){
        printf("Correct Password");
    }
    else{
        printf("Incorrect Password");
    }
    return 0;
}
