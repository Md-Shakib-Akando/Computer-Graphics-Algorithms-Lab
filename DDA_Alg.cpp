#include<bits/stdc++.h>
#include<graphics.h>
#include<cmath>
using namespace std;
void DDA(int x1,int y1,int x2,int y2){

    int dx=x2-x1;
    int dy=y2-y1;
    int steps;
    steps=max(abs(dx),abs(dy));

    float xinc=float(dx)/steps;
    float yinc=float(dy)/steps;

    float x=x1;
    float y=y1;

    for(int i=0; i<=steps; i++){
        putpixel(round(x),round(y), WHITE);
        x+=xinc;
        y+=yinc;
    }



}


int main(){

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x1,x2,y1,y2;
    cout<<"Enter the coordinates of the first point: ";
    cin>>x1>>y1;
    cout<<"Enter the coordinates of the second point: ";
    cin>>x2>>y2;

    DDA(x1,y1,x2,y2);
    getch();
    closegraph();

}