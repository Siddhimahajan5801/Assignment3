#include<stdio.h>

int main(){
    //program to check whether a triangle is valid or not

    int a,b,c;
    printf("Enter the length of the sides of the triangle\n");
    scanf("%d %d %d",&a,&b,&c);

    if ((a+b)<c || (b+c)<a || (c+a)<b)
    printf("The triangle is invalid\n");

    else printf("The triangle is valid\n");

    return 0;
}