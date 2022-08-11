#include<stdio.h>

int main(){
    // program to check the nature of the roots of quadratic equation:

    int a,b,c;
    int d;
    printf("Enter the coefficients of quadratic eqation\n");  //quadratic equation -->a*x^2+b*x+c
    scanf("%d %d %d",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if (d>0){
    printf("The roots are real and distinct\n");
    }

    else {
        if (d==0)
        printf("The roots are real and equal\n");

        else
        printf("The roots are imaginary\n");
    }


    return 0;
}