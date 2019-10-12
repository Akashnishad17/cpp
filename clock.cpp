#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    initwindow(1080,728);
    circle(320,240,200);
    int i,j,x=0,y=0,x1,y1;
    for(i=0;i<60;i++)
    {
        int q=i*6;
        x1=320+x*cos(q)-y*sin(q);
        y1=240+x*sin(q)+y*cos(q);
        for(j=0;j<=5;j++)
            circle(x1,y1,j);
        delay(5);
    }
    getch();
    closegraph();
}
