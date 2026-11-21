/* ===== CG Lab: FILL (vorat) TEMPLATE =====
   PDF er je kono Ex er loop "EXAMPLE" er jaygay boshao -> result vora (filled) ashbe */
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>        // delay -> shudhu Turbo C e (CodeBlocks e ei line bad)
#define PI 3.14159
int cx, cy;

void axes(){ cx=getmaxx()/2; cy=getmaxy()/2; setcolor(WHITE);
  line(0,cy,getmaxx(),cy); line(cx,0,cx,getmaxy()); }

void draw(float x[],float y[],int n,int c){          // shudhu border (line er jonno)
  setcolor(c);
  for(int i=0;i<n;i++)
    line(cx+x[i],cy-y[i],cx+x[(i+1)%n],cy-y[(i+1)%n]); }

void fill(float x[],float y[],int n,int c){          // polygon vora
  int p[40];
  for(int i=0;i<n;i++){ p[2*i]=cx+x[i]; p[2*i+1]=cy-y[i]; }
  setcolor(c); setfillstyle(SOLID_FILL,c);
  fillpoly(n,p); }

void fcircle(float xc,float yc,float rx,float ry,int c){   // circle/ellipse vora
  setcolor(c); setfillstyle(SOLID_FILL,c);
  fillellipse(cx+xc, cy-yc, rx, ry); }

int main(){
  int n=3; float x[10]={0,100,50}, y[10]={0,0,80};
  float nx[10], ny[10];
  /* user input lagle EKHANE (initgraph er age) */
  int gd=DETECT,gm; initgraph(&gd,&gm,(char*)"");
  // Turbo C: initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  axes();
  fill(x,y,n,LIGHTBLUE);                 // original (vora)

  /* ===== PDF er EXAMPLE loop ekhane ===== */
  for(int i=0;i<n;i++){ nx[i]=x[i]+150; ny[i]=y[i]+60; }   // demo: translation

  fill(nx,ny,n,YELLOW);                  // result (vora)
  getch(); closegraph(); return 0;
}