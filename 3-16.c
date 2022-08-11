#include<stdio.h>

int main(){

    //program to check whether a given character is an alphabet with uppercase or lowercase or a digit or a special character

    char c;
    printf("Enter the character\n");
    scanf("%c",&c);

    if (c>='A' && c<='Z')
    printf("Given character is an alphabet in uppercase\n");

    if (c>='a' && c<='z')
     printf("Given character is an alphabet in lowercase\n"); 

    if (c>='0' && c<='9')
     printf("Given character is a digit\n");
    
    if( (c>=32 && c<=47)|| (c>=58 && c<=64) || (c>=91 && c<=96) || (c>=123 && c<=126) )
     printf("Given character is a special character\n");

    return 0;
}