#include<stdio.h>
#include<math.h>
float func(float x)
{
    return tan(x);   //editable according to given questions
}
int main()
{
    int n,i;
    float f,a,b,x=1;
    f=func(x);
    while(f<0)
    {
        x++;
        f=func(x);
    }
    a=x-1;
    b=x;
    printf("How many Iterations you want to calculate? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=(a*func(b)-b*func(a))/(func(b)-func(a));
        printf("\nFor Iteration %d : x=%f\n",i,x);
        if(func(x)<0)
            a=x;
        else
            b=x;
    }
    return 0;
}

