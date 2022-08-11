#include<stdio.h>

int main(){
    //a program to check whether a given number is positive or non-positive

    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

    if (x>0)
    printf("The number is positive\n");

    else
     printf("The number is non-positive\n");
     
    return 0;
}