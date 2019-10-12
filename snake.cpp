#include<graphics.h>
main()
{
    int gd=0,gm;
    int i=0,j=0,c;
    initgraph(&gd,&gm,"");
    initwindow(1600,800);
    while(1)
    {
        line(400,150,1200,150);
        line(400,650,1200,650);
        line(400,150,400,650);
        line(1200,150,1200,650);
        circle(800+i,400+j,100);
        c=getch();
        if (c == 119)
            {
                j=-1; i=0;
            }
        else if (c == 100)
            {
                i=1; j=0;
            }
        else if (c == 115)
            {
                j=1; i=0;
            }
        else if (c == 97)
            {
                i=-1; j=0;
            }
        delay(50);
        cleardevice();
    }
    getch();
    closegraph();
}
