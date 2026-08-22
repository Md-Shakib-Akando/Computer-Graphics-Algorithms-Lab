#include <graphics.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Original triangle
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Scaling factors
    int Sx = 2;
    int Sy = 2;

    // Draw original triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    x1 = x1 * Sx;
    y1 = y1 * Sy;

    x2 = x2 * Sx;
    y2 = y2 * Sy;

    x3 = x3 * Sx;
    y3 = y3 * Sy;

    // Draw scaled triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    getch();
    closegraph();

    return 0;
}