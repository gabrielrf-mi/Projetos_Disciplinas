#ifndef FIGURA_H
#define FIGURA_H
#include "screen.h"
#include "ponto.h"

/**
 * @brief The figura class É uma classe base para as demais.
 * Ela quem define a classe abstrata.
 */
class figura
{
public:
    ponto p1;
    ponto p2;
    int altura, largura, xr, yr, raio, fillmodeC,fillmodeR;
public:
    /**
     * @brief figura é o construtor da classe.
     */
    figura();
    /**
     * @brief setparametrosretangulo seta os parâmetros necessários do retângulo.
     * @param _xr é o ponto inicial no eixo "x".
     * @param _yr é o ponto inicial no eixo "y".
     * @param _altura é a altura do retângulo.
     * @param _largura é a largura do retângulo.
     * @param _fillmodeR define se o retângulo é preenchido ou não.
     */
    void setparametrosretangulo(int _xr, int _yr, int _altura, int _largura, int _fillmodeR);
    /**
     * @brief setparametrosreta seta os parâmetros necessários da reta.
     * @param _x é o ponto inicial no eixo "x".
     * @param _y é o ponto inicial no eixo "y".
     * @param _x2 é o ponto final no eixo "x".
     * @param _y2 é o ponto final no eixo "x".
     */
    void setparametrosreta(int _x, int _y, int _x2, int _y2);
    /**
     * @brief setparametroscirculo seta os parâmetros necessários do círculo.
     * @param _xr é o ponto central do círculo no eixo "x".
     * @param _yr é o ponto central do círculo no eixo "y".
     * @param _raio é o raio da circunferência.
     * @param _fillmodeC define se o círculo é preenchido ou não.
     */
    void setparametroscirculo(int _xr, int _yr, int _raio, int _fillmodeC);
    /**
     * @brief draw serve para desenhar a figura.
     * @param t é um objeto da classe Screen.
     */
    virtual void draw(Screen &t)=0;
};

#endif // FIGURA_H
