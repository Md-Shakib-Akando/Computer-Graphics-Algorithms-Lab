
#include <graphics.h>  // initgraph, line, circle, ellipse
#include <math.h>      // sin, cos, atan, sqrt
#include <stdio.h>     // printf, scanf, sprintf
#include <conio.h>     // getch (Turbo C / CodeBlocks)
#include <dos.h>       // delay (only Turbo C)

#define PI 3.14159

int cx, cy;

// Draw coordinate axes
void axes()
{
    cx = getmaxx() / 2;
    cy = getmaxy() / 2;

    line(0, cy, getmaxx(), cy);
    line(cx, 0, cx, getmaxy());
}

// Draw polygon
void draw(float x[], float y[], int n, int c)
{
    setcolor(c);

    for (int i = 0; i < n; i++)
    {
        line(
            cx + x[i],
            cy - y[i],
            cx + x[(i + 1) % n],
            cy - y[(i + 1) % n]
        );
    }
}

int main()
{
    int n = 3;

    float x[10] = {0, 100, 50};
    float y[10] = {0, 0, 80};

    float nx[10], ny[10];

    /* User input lagle EKHANE (initgraph er age) scanf koro */

    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"");

    // Turbo C:
    // initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    axes();

    // Draw original triangle
    draw(x, y, n, WHITE);

    /* ===== EXAMPLE er loop ekhane ===== */
   


    // Draw transformed triangle
    draw(nx, ny, n, YELLOW);

    getch();

    closegraph();

    return 0;
}
