#include<stdio.h>

int main(){
    //program to check whether a given year is leap year or not

    int y;
    printf("Enter a year\n");
    scanf("%d",&y);

    if ((y%4==0 && y%100!=0) || (y%400==0))
    printf("The given year is a leap year\n");

    else
    printf("The given year is not a leap year\n");

    return 0;
}