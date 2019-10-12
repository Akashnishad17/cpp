#include<stdio.h>
#include<math.h>
float func(float x)
{
    return pow(2.718281,-abs(x));
}
int main()
{
    float a,b,N,y,h,result,sum1=0,sum2=0,i;
    int j=1;
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
        if(j%2==0)
            sum2=sum2+y;
        else
            sum1=sum1+y;
        j++;
    }
    result=h*(func(a)+func(b)+4*sum1+2*sum2)/3;
    printf("Result is %f",result);
}

