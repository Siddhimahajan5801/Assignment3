#include<stdio.h>

int main(){
    // program to check even or odd number

    int x;
    printf("Enter a number\n");
    scanf("%d",&x);

    if (x%2==0)
    printf("The given number is even\n");

    else 
    printf("The given number is odd\n");
    
    return 0;
}