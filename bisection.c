#include<stdio.h>
#include<math.h>
float func(float x)
{
    return tan(x)+x;   //editable according to given questions
}
int main()
{
    int n,i;
    float f,a,b,x;
    f=func(x);
    while(f<0)
    {
        x++;
        f=func(x);
    }
    a=x-1;
    b=x;
    a=2;
    b=2.1;
    printf("How many Iterations you want to calculate? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=(a+b)/2;
        printf("\nFor Iteration %d : x=%f\n",i,x);
        if(func(x)<0)
            a=x;
        else
            b=x;
    }
    return 0;
}
