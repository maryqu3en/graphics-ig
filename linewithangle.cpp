#include<graphics.h>
#include<math.h>


void lineatangle(int x, int y, int length, int angle)
{
	double rad = (double)angle*M_PI/180; 
	line(x, y, x-length*cos(rad), y-length*sin(rad));
}


int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL); 

	lineatangle(100, 200, 200, 120);
	    
    getch(); 
    closegraph();
    return 0;
}