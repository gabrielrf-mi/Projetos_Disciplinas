#ifndef PLOTTET_H
#define PLOTTET_H
#include <QDebug>
#include <QWidget>
#include <vector>
#include <iostream>

using namespace std;
/**
 * @brief The Plottet class exibe, de forma gráfica, os dados recebidos pelo servidor.
 */
class Plottet : public QWidget
{
    Q_OBJECT

    vector<float> tempof, valorf;

public:
    /**
     * @brief Plottet
     * @param parent
     */
    explicit Plottet(QWidget *parent = nullptr);
    /**
     * @brief paintEvent desenha no objeto widget.
     * @param event
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief timerEvent gerencia a função do "TimerEvent" padrão, que diz o tempo de exencução do programa.
     * A cada quantidade de tempo que o usuário forneceu, ou o "TimerEvent" padrão, a função inicializa um dado no servidor.
     * @param event é um ponteiro do tipo QTimeEvent que serve para fornecer propriedades do timer.
     */
    void timerEvent(QTimerEvent *event);

public slots:
/**
 * @brief setdata recebe os dois vetores da mainwindow.
 * @param tempo vetor de tempos recebidos.
 * @param valor vetor de valores recebidos.
 */
void setdata(vector<float> tempo, vector<float> valor);
};

#endif // PLOTTET_H
