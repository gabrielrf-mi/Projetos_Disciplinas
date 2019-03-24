#ifndef SCREEN_H
#define SCREEN_H
#include <ostream>
#include <vector>
#include <istream>

using namespace std;

/**
 * @brief The Screen class Serve para criar a tela de impressão
 * e para fazer operações com essa.
 */
class Screen
{
protected:

    int nlin, ncol;
    char brush;
    vector< vector<char> > mat;

public:
    /**
     * @brief setScreen cria uma tela com _nlin linhas e _ncol colunas.
     * @param _nlin é o número de linhas da tela de impressão.
     * @param _ncol é o número de colunas da tela de impressão.
     */
    void setScreen(int _nlin, int _ncol);
    /**
     * @brief getScreenX resgata o número de colunas da tela de impressão.
     * @return número de colunas da tela de impressão.
     */
    int  getScreenX();
    /**
     * @brief getScreenY resgata o número de linhas da tela de impressão.
     * @return número de linhas da tela de impressão.
     */
    int  getScreenY();
    /**
     * @brief setPixel imprime o pixel setado no brush na posição "x" e "y".
     * @param x é a posição "x" do pixel a ser imprimido na tela.
     * @param y é a posição "y" do pixel a ser imprimido na tela.
     */
    void setPixel(int x, int y);
    /**
     * @brief clear reseta a matriz, deixando-a vazia novamente.
     */
    void clear();
    /**
     * @brief setBrush seta o caractere definido pelo usuário.
     * @param _brush novo caractere definido pelo usuário.
     */
    void setBrush(char _brush);
    /**
     * @brief operator << é a sobrecarga do operado "<<" que
     * serve, tanto para imprimir a matriz diretamente
     * como também para escrevê-la em um arquivo.
     * @param os é o fluxo de saída.
     * @param t é um objeto da classe Screen.
     * @return outro valor de saída.
     */
    friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
