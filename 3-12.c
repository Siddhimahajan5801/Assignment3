#include<stdio.h>

int main(){

    //program to check whether a given alphabet is uppercase or lowercase

    char c;
    printf("Enter the alphabet\n");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
    printf("Given alphabet is in uppercase\n");
    else {

    if (c>='a' && c<='z')
     printf("Given alphabet is in lowercase\n"); 

     else printf("Invalid\n");
    }

    return 0;
} 