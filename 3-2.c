#include<stdio.h>

int main(){
    // a program to check whether a given number is divisible by 5 or not

    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

     if (x%5==0)
     printf("The number is divisible by 5\n");

     else 
     printf("The number is not divisible by 5\n");

    return 0;
}