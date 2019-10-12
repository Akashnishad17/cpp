#include<stdio.h>
#include<math.h>
float func(float x)
{
    return 16/((x*x+4)*(x+2))+2;
}
float fu(float x)
{
    return x*x*x*x-32;
}
int main()
{
    int n,i;
    float f,a,b,x;
    f=fu(x);
    while(f<0)
    {
        x++;
        f=fu(x);
    }
    x=(x-1+x)/2;
    printf("Initial root will be %f\n",x);
    printf("How many Iterations you want to calculate? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=func(x);
        printf("\nFor Iteration %d : x=%f\n",i,x);
    }
}
