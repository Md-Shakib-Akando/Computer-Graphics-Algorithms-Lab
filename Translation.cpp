#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original triangle points
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Translation values
    int Tx = 200;
    int Ty = 100;

  
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

  
    x1 = x1 + Tx;
    y1 = y1 + Ty;

    x2 = x2 + Tx;
    y2 = y2 + Ty;

    x3 = x3 + Tx;
    y3 = y3 + Ty;

    // Draw translated triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();

    return 0;
}