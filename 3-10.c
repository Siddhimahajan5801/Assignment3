#include<stdio.h>

int main(){
    //program to calculate profit or loss percentage

    float cp,sp,profit,loss;
    int pp,lp;
    

    printf("Enter the cost price\n");
    scanf("%f",&cp);
    printf("Enter the selling price\n");
    scanf("%f",&sp);

    if (sp>cp){
        printf("we are having an profit\n");
        profit=sp-cp;
        pp=(profit/cp)*100;
        printf("The profit percentage is %d\n",pp);
    }

    else {
        if (sp==cp)
          printf("No profit,No loss\n");

          else{
        printf("we are having an loss\n");
        loss=cp-sp;
        lp=(loss/cp)*100;
        printf("The loss percentage is %d\n",lp);
          }
    }
 return 0;
}