#include<stdio.h>
float func(float x,float y)
{
    return x+y*y;
}
int main()
{
    float x0,y0,y,h,x,k1,k2,k3,k4,k,i;
    printf("Enter\nValue of x0 : ");
    scanf("%f",&x0);
    printf("Value of y0 : ");
    scanf("%f",&y0);
    printf("Value of h : ");
    scanf("%f",&h);
    printf("Enter the value at which you want to calculate? ");
    scanf("%f",&x);
    for(i=x0;i<=x-h;i+=h)
    {
        k1=h*func(i,y0);
        k2=h*func(i+h/2,y0+k1/2);
        k3=h*func(i+h/2,y0+k2/2);
        k4=h*func(i+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6;
        //printf("%f\t%f\t%f\t%f\t%f\n",k1,k2,k3,k4,k);
        y=y0+k;
        printf("\nValues at x=%f is %f\n",i+h,y);
        y0=y;
    }
    return 0;
}
