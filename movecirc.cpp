#include<graphics.h>
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,NULL); 

    int x=100, y=100;
    while (1)
    {
        cleardevice();
        circle(x, y, 50);
        if (GetAsyncKeyState(VK_UP))
        {
            y-=10;
        }else if (GetAsyncKeyState(VK_DOWN))
        {
            y+=10;
        }else if (GetAsyncKeyState(VK_RIGHT))
        {
            x+=10;
        }else if (GetAsyncKeyState(VK_LEFT))
        {
            x-=10;
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            break;
        }
        delay(10);
    }
    
    getch(); 
    closegraph();
    return 0;
}