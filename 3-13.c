#include<stdio.h>

int main(){
    // program to check whether a given number is divisible by 3 and divisible by 2

    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if ((n%3 && n%2)==0)
     printf("The given number is divisible by 3 and divisible by 2\n");

     else printf("The given number is not divisible by 3 and 2\n");

    return 0;
}