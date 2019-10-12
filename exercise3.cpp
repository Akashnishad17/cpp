#include<graphics.h>
#include<math.h>
#include<cstdlib>
#include<conio.h>
#include<stdio.h>
#include<time.h>
void display(void);
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,720);
    int x,y,x1=210,y1=0,i,j,k,x2,y2,x3,y3;
    char a[15];
    float s,temp1,temp2,t1,t2;
    time_t t=time(NULL);
    struct tm tm=*localtime(&t);
    k=tm.tm_hour;
    j=tm.tm_min;
    i=tm.tm_sec;
    if(k>11)
        k=k-12;
    again:
    temp2=0.000000+3600*k+60*j;
    for(k;k<=11;k++)
    {
        temp1=0.000000+60*j+i;
    for(j;j<=59;j++)
    {
        for(i;i<=59;i++)
        {
        s=((i*6+90)*22.000000)/(7*180);
        t1=((temp1*0.100000+90)*22.000000)/(7*180);
        x2=320-(x1-30)*cos(t1)+y1*sin(t1);
        y2=240+y1*cos(t1)-(x1-30)*sin(t1);
        t2=(((temp2*0.500000)/60+90)*22.000000)/(7*180);
        x3=320-(x1-60)*cos(t2)+y1*sin(t2);
        y3=240+y1*cos(t2)-(x1-60)*sin(t2);
        circle(320,240,230);
        circle(320,240,5);
        display();
        x=320-x1*cos(s)+y1*sin(s);
        y=240+y1*cos(s)-x1*sin(s);
        line(320,240,x,y);
        line(320,240,x2,y2);
        line(320,240,x3,y3);
        sprintf(a,"%d:%d:%d",k,j,i);
        outtextxy(305,280,a);
        delay(925);
        cleardevice();
        temp1=temp1+1.000000;
        temp2=temp2+1.000000;
        }
        i=0;
    }
    j=0;
    }
    k=0;
    goto again;
    getch();
    closegraph();
}
void display()
{
    int a[12],i,j,x1=210,y1=0,x,y;
    float q=(6.000000*22.000000)/(7*180);
    for(i=0;i<12;i++)
        a[i]=i+1;
    char s[10];
    sprintf(s,"%d",a[11]);
    outtextxy(310,45,s);
    sprintf(s,"%d",a[5]);
    outtextxy(315,420,s);
    sprintf(s,"%d",a[2]);
    outtextxy(505,240,s);
    sprintf(s,"%d",a[8]);
    outtextxy(130,240,s);
    sprintf(s,"%d",a[0]);
    outtextxy(405,70,s);
    sprintf(s,"%d",a[1]);
    outtextxy(480,145,s);
    sprintf(s,"%d",a[3]);
    outtextxy(475,330,s);
    sprintf(s,"%d",a[4]);
    outtextxy(405,390,s);
    sprintf(s,"%d",a[10]);
    outtextxy(215,70,s);
    sprintf(s,"%d",a[9]);
    outtextxy(155,145,s);
    sprintf(s,"%d",a[7]);
    outtextxy(155,335,s);
    sprintf(s,"%d",a[6]);
    outtextxy(215,390,s);
    for(i=1;i<=60;i++)
    {
        q=(i*6.000000*22.000000)/(7*180);
        x=320+x1*cos(q)+y1*sin(q);
        y=240+y1*cos(q)-x1*sin(q);
        for(j=3;j>=0;j--)
        circle(x,y,j);
    }
}
