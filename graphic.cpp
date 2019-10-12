#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    rectangle(300,50,450,100);
    line(250,200,500,350);
    circle(100,80,20);
    setcolor(14);
    ellipse(250,240,0,360,40,150);
    getch();
    closegraph();
}
