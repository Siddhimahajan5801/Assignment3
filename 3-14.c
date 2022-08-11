#include<stdio.h>

int main(){
    // program to check whether a given number is divisible by 7 or divisible by 3

    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    if ((n%7==0 )|| (n%3==0))
     printf("The given number is divisible by 7 or divisible by 3\n");

     else printf("The given number is not divisible by 7 or 3\n");

    return 0;
}