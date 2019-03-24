#ifndef PONTO_H
#define PONTO_H

/**
 * @brief The ponto class serve para realizar
 * e manipular pontos de dados do tipo float.
 */
class ponto
{
    int x, y;
public:
    /**
     * @brief getX é uma função da classe que serve
     * para recuperar o valor da variável _x do ponto.
     * @return Valor do _x do ponto.
     */
    void setXY(int _x, int _y);
    /**
     * @brief getX é uma função da classe que serve
     * para recuperar o valor da variável _x do ponto.
     * @return Valor do _x do ponto.
     */
    int getX(void);
    /**
     * @brief getY é uma função da classe que serve
     * para recuperar o valor da variável _y do ponto.
     * @return Valor do _y do ponto.
     */
    int getY(void);
};

#endif // PONTO_H
