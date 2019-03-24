#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "plottet.h"

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <vector>
#include <iostream>

using namespace std;
namespace Ui {
class MainWindow;
}
/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
    int timing, timeid;
    QString strIP;

public:
    /**
     * @brief MainWindow recebe e trata os dados recebidos no servidor.
     * @param parent é um ponteiro q serve para tratar/modificar/pegar características dos objetos widgets.
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    /**
     * @brief timerEvent gerencia a função do "TimerEvent" padrão, que diz o tempo de exencução do programa.
     * A cada quantidade de tempo que o usuário forneceu, ou o "TimerEvent" padrão, a função inicializa um dado no servidor.
     * @param event é um ponteiro do tipo QTimeEvent que serve para fornecer propriedades do timer.
     */
    void timerEvent(QTimerEvent *event);

signals:
 /**
 * @brief passData é um sinal que manda os valores de tempo e de valor para a classe plotter
 * @return Retorna um vetor com os valores de tempo e valores.
 */
vector<float> passData(vector<float>,vector<float>);


public slots:
    /**
     * @brief getData ler e tratas os dados recebidos pelo servidor.
     */
    void getData();
    /**
    * @brief tcpConnect é uma função que serve para conectar ao servidor.
    */
    void tcpConnect();
    /**
     * @brief startTime inicia o tempo.
     */
    void startTime();
    /**
     * @brief stopTime para o tempo iniciado na função "startTime".
     */
    void stopTime();
    /**
     * @brief Time serve para receber um tempo novo e excluir o anterior.
     * @param _timming é o tempo novo fornecido pelo usuário.
     */
    void Time(int _timming);
    /**
     * @brief tcpDisconnect() é uma função que serve para desconectar ao servidor.
     */
    void tcpDisconnect();
    /**
     * @brief setIP recebe o IP, fornecido pelo usuário no momento da conexão com o servisor,
     * para utilização em outra parte do programa.
     * @param _ip é o IP fornecido pelo usuário.
     */
    void setIP(QString _ip);
    /**
     * @brief list mostra as máquinas que se conectaram ao servidor e estão gerando dados.
     */
    void list();
private:
    Ui::MainWindow *ui;
    QTcpSocket *socket;
};

#endif // MAINWINDOW_H
