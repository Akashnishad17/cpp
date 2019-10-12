#include<graphics.h>
#include<conio.h>
#include<cstdio>
#include<math.h>
void display(void);
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,720);
    display();
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
    circle(320,240,5);
    circle(320,240,230);
    line(320,240,320,60);
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

