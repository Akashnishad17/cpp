#include<graphics.h>
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,728);
    int i;
    for(i=0;i<=500;i++)
    {
        cleardevice();
        line(100+i,100,400+i,100);
        delay(10);
    }
    getch();
    closegraph();
}
