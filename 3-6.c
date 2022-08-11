#include<stdio.h>

int main(){

    //number greater btw 2 numbers

    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    if (a>b)
    printf("%d is greater\n",a);

    else {
        if (a==b)
        printf("%d is greater\n",a);

        else 
        printf("%d is greater\n",b);
    }

    return 0;
}