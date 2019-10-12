#include<stdio.h>
float func(float x)
{
    return log(1+x*x);
}
int main()
{
    float a,b,N,y,h,result,sum=0,i;
    printf("Enter\nUpper limit : ");
    scanf("%f",&a);
    printf("Lower limit : ");
    scanf("%f",&b);
    printf("Enter no. of subintervals : ");
    scanf("%f",&N);
    h=(a-b)/N;
    for(i=h;i<a;i=i+h)
    {
        y=func(i);
        sum=sum+y;
    }
    result=h*(func(a)+func(b)+2*sum)/2;
    printf("Result is %f",result);
}
