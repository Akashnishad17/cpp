#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<string.h>
#include<stdio.h>
#include<cstdio>
#include<conio.h>
void display(void);
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,720);
    int x,y;
    int i=60;
        for(x=320;x<=520;x++)            /*320 to 520 y++, 520 to 320 y++,320 to 120 y--,120 to 320 y--*/
        {
            display();
            circle(320,240,10);
            y=-sqrt(200*200-pow((x-320),2))+240;
            line(320,240,x,y);
            delay(i);
            cleardevice();
        }
        for(x=520;x>=320;x--)            /*320 to 520 y++, 520 to 320 y++,320 to 120 y--,120 to 320 y--*/
        {
            display();
            circle(320,240,10);
            y=sqrt(200*200-pow((x-320),2))+240;
            line(320,240,x,y);
            delay(i);
            cleardevice();
        }
        for(x=320;x>=120;x--)            /*320 to 520 y++, 520 to 320 y++,320 to 120 y--,120 to 320 y--*/
        {
            display();
            circle(320,240,10);
            y=sqrt(200*200-pow((x-320),2))+240;
            line(320,240,x,y);
            delay(i);
            cleardevice();
        }
        for(x=120;x<=320;x++)            /*320 to 520 y++, 520 to 320 y++,320 to 120 y--,120 to 320 y--*/
        {
            display();
            circle(320,240,10);
            y=-sqrt(200*200-pow((x-320),2))+240;
            line(320,240,x,y);
            delay(i);
            cleardevice();
        }
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

