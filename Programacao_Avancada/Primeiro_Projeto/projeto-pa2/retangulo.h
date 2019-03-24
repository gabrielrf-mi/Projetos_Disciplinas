#ifndef RETANGULO_H
#define RETANGULO_H
#include "figura.h"
#include "screen.h"
#include "ponto.h"

/**
 * @brief The retangulo class É herdeira da classe figura e
 * serve para desenhar uma figura de um retângulo.
 */
 */
class retangulo: public figura
{

public:
    /**
     * @brief draw serve para desenhar a figura.
     * @param t é um objeto da classe Screen.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
