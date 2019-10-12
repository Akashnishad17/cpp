#include<stdio.h>
#include<math.h>
float func(float x,float y)
{
    return x+y;
}
int main()
{
    float x0,y,h,N,i,x;
    printf("Enter\nValue of x0 : ");
    scanf("%f",&x0);
    printf("Value of y0 : ");
    scanf("%f",&y);
    printf("Enter no. of subintervals : ");
    scanf("%f",&N);
    printf("Enter the value at which you want to find approximate value? ");
    scanf("%f",&x);
    h=(x-x0)/N;
    for(i=x0;i<x;i+=h)
    {
        y=y+h*func(i,y);
        printf("\ny=%f at x=%f\n",y,i+h);
    }
    printf("\nResult=%f",y);
}
