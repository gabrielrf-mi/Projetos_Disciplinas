#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>


namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
  Q_OBJECT
int timming=1, timeid;

public:
/**
   * @brief MainWindow é o construtor da classe e onde é conectada a parte gráfica com o código.
   * @param parent é um ponteiro do tipo QWidget que serve para fornecer propriedades da janela.
   */
  explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
/**
    * @brief timerEvent gerencia a função do "TimerEvent" padrão, que diz o tempo de exencução do programa.
    * A cada quantidade de tempo que o usuário forneceu, ou o "TimerEvent" padrão, a função inicializa um dado no servidor.
    * @param event é um ponteiro do tipo QTimeEvent que serve para fornecer propriedades do timer.
    */
   void timerEvent(QTimerEvent *event);

public slots:

   /**
   * @brief tcpConnect é uma função que serve para conectar ao servidor.
   */
  void tcpConnect();
  /**
   * @brief tcpDisconnect() é uma função que serve para desconectar ao servidor.
   */
  void tcpDisconnect();
  /**
   * @brief startTime inicia o tempo.
   */
  void startTime();
  /**
   * @brief stopTime para o tempo iniciado na função "startTime".
   */
  void stopTime();
  /**
   * @brief putData inicializa os dados no servidor.
   */
  void putData();
  /**
   * @brief Time serve para receber um tempo novo e excluir o anterior.
   * @param _timming é o tempo novo fornecido pelo usuário.
   */
  void Time(int _timming);
private:
  Ui::MainWindow *ui;
  QTcpSocket *socket;
};

#endif // MAINWINDOW_H
