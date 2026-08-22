#include<bits/stdc++.h>
#include<graphics.h>
#include<cstdlib>
using namespace std;

void Bresenham(int x1,int y1,int x2, int y2){
    int dx=abs(x2-x1);
    int dy=abs(y2-y1);
    

   int sx=(x1<x2)?sx=1:sx=-1;
    int sy=(y1<y2)?sy=1:sy=-1;

    int p=2*dy-dx;

    int x=x1;
    int y=y1;
    while(x!=x2){
        putpixel(x,y,WHITE);
        if(p<0){
            p=p+2*dy;
        }
        else{
            y+=sy;
            p=p+2*dy-2*dx;

        }
        x+=sx;

    }
    putpixel(x,y,WHITE);
}

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,x2,y1,y2;
    cout<<"Enter x1 y1: ";
    cin>>x1>>y1;
    cout<<"Enter x2 y2: ";
    cin>>x2>>y2;
    Bresenham(x1,y1,x2,y2);
    getch();
    closegraph();

}