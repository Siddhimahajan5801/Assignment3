#include<stdio.h>

int main(){
    //a program to check whether a given number is positive,negative or zero

    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

    if (x>0)
    printf("The number is positive\n");

    else{
        if (x==0)
        printf("The number is zero\n");
        else
     printf("The number is negative\n");
    }
    return 0;
}