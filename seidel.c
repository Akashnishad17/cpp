#include<stdio.h>
int main()
{
    float a[5][5],b[5];
    float x[10],y[10],z[10];
    x[0]=0; y[0]=0; z[0]=0;
    int i,j,n;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("Enter element at position %d%d : ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=3;i++)
    {
        printf("Enter the element at position %d : ",i);
        scanf("%f",&b[i]);
    }
    printf("Enter the numbers of approximation upto which you want to calculate : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        x[i+1]=(b[1]-a[1][2]*y[i]-a[1][3]*z[i])/a[1][1];
        y[i+1]=(b[2]-a[2][1]*x[i+1]-a[2][3]*z[i])/a[2][2];
        z[i+1]=(b[3]-a[3][1]*x[i+1]-a[3][2]*y[i+1])/a[3][3];
    }
    for(i=1;i<=n;i++)
    {
        printf("For approximation %d :\t",i);
        printf("x%d=%f\ty%d=%f\tz%d=%f\n\n",i,x[i],i,y[i],i,z[i]);
    }
    return 0;
}
