#include "reta.h"
#include <iostream>
#include "screen.h"
#include "figura.h"
#include "ponto.h"
using namespace std;

reta::reta(){   }

void reta::draw(Screen &t)
{
    t.clear();
    float dx , dy, step;
    float x,y,x2,y2;
    float xin,yin;

    x = p1.getX();
    y = p1.getY();
    x2 =p2.getX();
    y2 = p2.getY();

    if (y2<y) {
        dx = x - x2;
        dy = y - y2;
    }
    else {
        dx = x2 - x;
        dy = y2 - y;
    }



    if(dx>=dy) step=dx;
    else       step=dy;

    xin = dx / (float)step;
    yin = dy / (float)step;

    for(int k = 0; k < step; k++){
        if (y2<y) {
            t.setPixel((int)x2,(int)y2);
            x2 -= xin;
            y2 -= yin;
        } else {
            t.setPixel((int)x,(int)y);
            x += xin;
            y += yin;
        }
    }
    cout<<t;
}

