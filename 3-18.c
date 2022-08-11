#include<stdio.h>

int main(){
    //program to display number of days in that month

    int m;
    printf("Enter the month\n");
    scanf("%d",&m);

    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    printf("This month has 31 days\n");

    if (m==4 || m==6 || m==9 || m==11)
    printf("This month has 30 days\n");

    if (m==2)
    printf("This month has 28/29days\n");

    return 0;
}