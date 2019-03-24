#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float altura, float largura){
    vertices[0].setXY(x,y);
    vertices[1].setXY(x,y-altura);
    vertices[2].setXY(x+largura,y-altura);
    vertices[3].setXY(x+largura,y);

    nv = 4;
}
