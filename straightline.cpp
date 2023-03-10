#include<graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL); 

    line(100, 150, 200, 250);
    line(200, 250, 300, 150);
    line(100, 150, 300, 150);
    

    
    getch(); 
    closegraph();
    return 0;
}