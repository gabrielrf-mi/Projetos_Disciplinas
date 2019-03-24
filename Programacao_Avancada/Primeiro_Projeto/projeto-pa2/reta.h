#ifndef RETA_H
#define RETA_H
#include "figura.h"

/**
 * @brief The reta class É herdeira da classe figura e
 * serve para desenhar uma figura de uma reta.
 */
 */
class reta: public figura
{

public:
    /**
     * @brief reta é o construtor da reta.
     */
    reta();
    /**
     * @brief draw serve para desenhar a figura.
     * @param t é um objeto da classe Screen.
     */
    void draw(Screen &t);

};

#endif // RETA_H
