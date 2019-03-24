/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plottet.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonconnect;
    QPushButton *pushButtondisconnect;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonupdate;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSlider *horizontalSlidertime;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonstart;
    QPushButton *pushButtonstop;
    QLabel *status;
    Plottet *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(590, 476);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonconnect = new QPushButton(centralWidget);
        pushButtonconnect->setObjectName(QStringLiteral("pushButtonconnect"));

        horizontalLayout->addWidget(pushButtonconnect);

        pushButtondisconnect = new QPushButton(centralWidget);
        pushButtondisconnect->setObjectName(QStringLiteral("pushButtondisconnect"));

        horizontalLayout->addWidget(pushButtondisconnect);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonupdate = new QPushButton(centralWidget);
        pushButtonupdate->setObjectName(QStringLiteral("pushButtonupdate"));

        horizontalLayout_3->addWidget(pushButtonupdate);


        verticalLayout->addLayout(horizontalLayout_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSlidertime = new QSlider(groupBox_2);
        horizontalSlidertime->setObjectName(QStringLiteral("horizontalSlidertime"));
        horizontalSlidertime->setMinimum(1);
        horizontalSlidertime->setMaximum(5);
        horizontalSlidertime->setOrientation(Qt::Horizontal);
        horizontalSlidertime->setTickInterval(1);

        gridLayout_2->addWidget(horizontalSlidertime, 0, 0, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonstart = new QPushButton(centralWidget);
        pushButtonstart->setObjectName(QStringLiteral("pushButtonstart"));

        horizontalLayout_2->addWidget(pushButtonstart);

        pushButtonstop = new QPushButton(centralWidget);
        pushButtonstop->setObjectName(QStringLiteral("pushButtonstop"));

        horizontalLayout_2->addWidget(pushButtonstop);


        verticalLayout->addLayout(horizontalLayout_2);

        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));

        verticalLayout->addWidget(status);


        horizontalLayout_4->addLayout(verticalLayout);

        widget = new Plottet(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout_4->addWidget(widget);

        horizontalLayout_4->setStretch(0, 30);
        horizontalLayout_4->setStretch(1, 70);

        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 590, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlidertime, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "IP do servidor", nullptr));
        pushButtonconnect->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        pushButtondisconnect->setText(QApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButtonupdate->setText(QApplication::translate("MainWindow", "Update", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Timing", nullptr));
        label->setText(QApplication::translate("MainWindow", "time", nullptr));
        pushButtonstart->setText(QApplication::translate("MainWindow", "Start", nullptr));
        pushButtonstop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
