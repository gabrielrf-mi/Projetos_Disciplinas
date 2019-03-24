#ifndef CIRCULO_H
#define CIRCULO_H
#include "figura.h"

/**
 * @brief The circulo class É herdeira da classe figura e
 * serve para desenhar uma figura de um círculo.
 */
class circulo : public figura
{
public:
    /**
     * @brief circulo é o contrutor da classe.
     */
    circulo();
    /**
     * @brief draw serve para desenhar a figura.
     * @param t é um objeto da classe Screen.
     */
    void draw(Screen &t);
    /**
     * @brief pixel serve para setar o pixel do brush na matriz
     * @param x valor "x" da borda do círculo.
     * @param y valor "y" da borda do círculo.
     * @param t é um objeto da classe Screen.
     */
    void pixel(int x, int y, Screen &t);
};

#endif // CIRCULO_H
