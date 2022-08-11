#include<stdio.h>

int main(){
    //program to check whether a candidate is pass or not 

    int s1,s2,s3,s4,s5;

    printf("Enter the marks of 5 subjects out of 100:\n");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);

    if (s1>=33 && s2>=33 && s3>=33 && s4>=33 && s5>=33)
    printf("The candidate is pass\n");

    else 
     printf("The candidate is fail\n");

    return 0;
}