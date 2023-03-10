#include<graphics.h>
#include<math.h>

void rotaterectangle(int cx, int cy, int w, int h, int angle)
{
double a=(double) (angle%180)*M_PI/180.0;
int dx=w/2, dy=h/2;
int point[8] = {
(double)(-dx*cos(a) - dy*sin(a) +cx),
(double)(-dx*sin(a) + dy*cos(a) +cy),
(double)(dx*cos(a) - dy*sin(a) +cx),
(double)(dx*sin(a) + dy*cos(a) +cy),
(double)(dx*cos(a) + dy*sin(a) +cx),
(double)(dx*sin(a) - dy*cos(a) +cy),
(double)(-dx*cos(a) + dy*sin(a) +cx),
(double)(-dx*sin(a) - dy*cos(a) +cy)};
for(int i=0; i<8; i+=2)
    line(point[i], point[i+1], point[(i+2)%8], point[(i+3)%8]);

}

int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL); 

    for (int i = 0; i <= 20*360; i++)
    {
        cleardevice(); 
        rotaterectangle(320, 240, 100, 100, i);
        swapbuffers(); 
        delay(5);
    }
    
    getch(); 
    closegraph();
    return 0;
}