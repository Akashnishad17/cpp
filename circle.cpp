#include<graphics.h>
main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(320,240,100);
    getch();
    closegraph();
}
