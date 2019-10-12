#include<stdio.h>
#include<math.h>
float func(float x,float y)
{
    return x*y;
}
int main()
{
    float x0,y0,y1,h,i,x,n;
    printf("Enter\nValue of x0 : ");
    scanf("%f",&x0);
    printf("Value of y0 : ");
    scanf("%f",&y0);
    printf("Value of h : ");
    scanf("%f",&h);
    printf("Enter the value at which you want to find approximate value? ");
    scanf("%f",&x);
    for(i=x0;i<x;i+=h)
    {
        n=3;
        y1=y0+h*func(i,y0);
        while(n>0)
        {
            y1=y0+h*(func(i,y0)+func(i+h,y1))/2;
            n--;
        }
        y0=y1;
        printf("\ny=%f at x=%f\n",y1,i+h);
    }
    printf("\nResult=%f",y1);
}
