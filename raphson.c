#include<stdio.h>
#include<math.h>
float func1(float x)
{
    return x*x-12;   //editable according to given questions
}
float func2(float x)
{
    return x*2;   //editable according to given questions
}
int main()
{
    int n,i;
    float f,x;
    f=func1(x);
    while(f<0)
    {
        x++;
        f=func1(x);
    }
    printf("How many Iterations you want to calculate? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x-func1(x)/func2(x);
        printf("\nFor Iteration %d : x=%f\n",i,x);
    }
    return 0;
}


