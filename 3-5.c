#include<stdio.h>

int main(){
    // program to check whether a given number is a 3-digit number or not

    int n;
    int count=0;

    printf("Enter the number\n");
    scanf("%d",&n);

    while (n!=0)
    {
        n=n/10;
        count++;
    }
       if (count==3)
       printf("The given number is a 3-digit number\n");

       else
        printf("The given number is not a 3-digit number\n");

    

    return 0;
}