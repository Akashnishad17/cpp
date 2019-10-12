#include<stdio.h>
#include<math.h>
float func(float x)
{
    return pow(sqrt(sin(x)),3);
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
    for(i=b+h;i<a;i=i+h)
    {
        y=func(i);
        if(j%3==0)
            sum2=sum2+y;
        if(j%3!=0)
            sum1=sum1+y;
        j++;
    }
    result=3*h*(func(a)+func(b)+3*sum1+2*sum2)/8;
    printf("Result is %f",result);
}


