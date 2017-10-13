/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>
#include <VLCQtWidgets/WidgetVideo.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralWidget;
    QPushButton *quitButton;
    QCheckBox *chkActif1;
    QCheckBox *chkActif2;
    QSlider *slDist1;
    QSlider *slDist2;
    QCheckBox *chkSens2;
    QCheckBox *chkSens1;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *leDist1;
    QLineEdit *leDist2;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *leIPServeur;
    QLineEdit *leMessage;
    QLabel *label_11;
    QLineEdit *leDist4;
    QSlider *slDist4;
    QCheckBox *chkSens4;
    QSlider *slDist3;
    QCheckBox *chkSens3;
    QLineEdit *leDist3;
    QCheckBox *chkActif3;
    QLabel *label_5;
    QCheckBox *chkActif4;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *leMessageConnexion;
    QPushButton *Button_connexion;
    QLineEdit *lePortServeur;
    QLabel *label_10;
    QPushButton *Button_deconnexion;
    QFrame *line;
    QLabel *label_15;
    QFrame *line_3;
    QLabel *label_16;
    QFrame *line_4;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *leEtat_reseau;
    QFrame *line_7;
    QPushButton *Button_connexion_camera;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_9;
    QLabel *label_19;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *line_2;
    QPushButton *Button_deconnexion_camera;
    QCheckBox *checkreseau;
    QCheckBox *checkcamera;
    VlcWidgetVideo *video;
    QLabel *label_camera_logo;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1350, 630);
        MainWindow->setMinimumSize(QSize(1350, 630));
        MainWindow->setMaximumSize(QSize(1350, 630));
        MainWindow->setStyleSheet(QLatin1String("background-color: #FFFFFF;\n"
""));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QStringLiteral("actionQuitter"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        quitButton = new QPushButton(centralWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setEnabled(true);
        quitButton->setGeometry(QRect(1170, 560, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        quitButton->setFont(font);
        quitButton->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#d34836;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#ff4343;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}"));
        quitButton->setCheckable(false);
        chkActif1 = new QCheckBox(centralWidget);
        chkActif1->setObjectName(QStringLiteral("chkActif1"));
        chkActif1->setEnabled(false);
        chkActif1->setGeometry(QRect(30, 380, 20, 21));
        chkActif1->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        chkActif2 = new QCheckBox(centralWidget);
        chkActif2->setObjectName(QStringLiteral("chkActif2"));
        chkActif2->setEnabled(false);
        chkActif2->setGeometry(QRect(30, 416, 20, 21));
        chkActif2->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        slDist1 = new QSlider(centralWidget);
        slDist1->setObjectName(QStringLiteral("slDist1"));
        slDist1->setEnabled(false);
        slDist1->setGeometry(QRect(220, 380, 441, 22));
        slDist1->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background: red;\n"
"	position: absolute; \n"
"	left: 12px; right: 12px;\n"
"\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	height:10;\n"
"    background: green;\n"
"	margin: 0 -6px; /* expand outside the groove */\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #DAF7A6;\n"
"}"));
        slDist1->setMaximum(999);
        slDist1->setOrientation(Qt::Horizontal);
        slDist2 = new QSlider(centralWidget);
        slDist2->setObjectName(QStringLiteral("slDist2"));
        slDist2->setEnabled(false);
        slDist2->setGeometry(QRect(220, 420, 441, 22));
        slDist2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background: red;\n"
"	position: absolute; \n"
"	left: 12px; right: 12px;\n"
"\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	height:10;\n"
"    background: green;\n"
"	margin: 0 -6px; /* expand outside the groove */\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #DAF7A6;\n"
"}"));
        slDist2->setMaximum(999);
        slDist2->setOrientation(Qt::Horizontal);
        chkSens2 = new QCheckBox(centralWidget);
        chkSens2->setObjectName(QStringLiteral("chkSens2"));
        chkSens2->setEnabled(false);
        chkSens2->setGeometry(QRect(100, 417, 21, 20));
        chkSens2->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        chkSens1 = new QCheckBox(centralWidget);
        chkSens1->setObjectName(QStringLiteral("chkSens1"));
        chkSens1->setEnabled(false);
        chkSens1->setGeometry(QRect(100, 380, 21, 21));
        chkSens1->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 340, 31, 16));
        label->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 340, 31, 16));
        label_2->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 380, 71, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 420, 61, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        leDist1 = new QLineEdit(centralWidget);
        leDist1->setObjectName(QStringLiteral("leDist1"));
        leDist1->setEnabled(false);
        leDist1->setGeometry(QRect(680, 370, 51, 31));
        leDist1->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leDist1->setReadOnly(false);
        leDist2 = new QLineEdit(centralWidget);
        leDist2->setObjectName(QStringLiteral("leDist2"));
        leDist2->setEnabled(false);
        leDist2->setGeometry(QRect(680, 410, 51, 31));
        leDist2->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leDist2->setReadOnly(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(690, 350, 31, 16));
        label_6->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 170, 71, 31));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label_9->setFont(font2);
        label_9->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        leIPServeur = new QLineEdit(centralWidget);
        leIPServeur->setObjectName(QStringLiteral("leIPServeur"));
        leIPServeur->setGeometry(QRect(90, 170, 91, 31));
        leIPServeur->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leIPServeur->setInputMethodHints(Qt::ImhDigitsOnly);
        leMessage = new QLineEdit(centralWidget);
        leMessage->setObjectName(QStringLiteral("leMessage"));
        leMessage->setEnabled(false);
        leMessage->setGeometry(QRect(110, 560, 1031, 31));
        leMessage->setFont(font);
        leMessage->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 560, 61, 31));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_11->setFont(font3);
        label_11->setStyleSheet(QStringLiteral("color: #5499c7 ;"));
        leDist4 = new QLineEdit(centralWidget);
        leDist4->setObjectName(QStringLiteral("leDist4"));
        leDist4->setEnabled(false);
        leDist4->setGeometry(QRect(680, 490, 51, 31));
        leDist4->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leDist4->setReadOnly(false);
        slDist4 = new QSlider(centralWidget);
        slDist4->setObjectName(QStringLiteral("slDist4"));
        slDist4->setEnabled(false);
        slDist4->setGeometry(QRect(220, 500, 441, 22));
        slDist4->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background: red;\n"
"	position: absolute; \n"
"	left: 12px; right: 12px;\n"
"\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	height:10;\n"
"    background: green;\n"
"	margin: 0 -6px; /* expand outside the groove */\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #DAF7A6;\n"
"}"));
        slDist4->setMaximum(999);
        slDist4->setOrientation(Qt::Horizontal);
        chkSens4 = new QCheckBox(centralWidget);
        chkSens4->setObjectName(QStringLiteral("chkSens4"));
        chkSens4->setEnabled(false);
        chkSens4->setGeometry(QRect(100, 496, 20, 21));
        chkSens4->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        slDist3 = new QSlider(centralWidget);
        slDist3->setObjectName(QStringLiteral("slDist3"));
        slDist3->setEnabled(false);
        slDist3->setGeometry(QRect(220, 460, 441, 22));
        slDist3->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
"    background: red;\n"
"	position: absolute; \n"
"	left: 12px; right: 12px;\n"
"\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	height:10;\n"
"    background: green;\n"
"	margin: 0 -6px; /* expand outside the groove */\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"    background: white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #DAF7A6;\n"
"}"));
        slDist3->setMaximum(999);
        slDist3->setOrientation(Qt::Horizontal);
        chkSens3 = new QCheckBox(centralWidget);
        chkSens3->setObjectName(QStringLiteral("chkSens3"));
        chkSens3->setEnabled(false);
        chkSens3->setGeometry(QRect(100, 456, 21, 21));
        chkSens3->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        leDist3 = new QLineEdit(centralWidget);
        leDist3->setObjectName(QStringLiteral("leDist3"));
        leDist3->setEnabled(false);
        leDist3->setGeometry(QRect(680, 450, 51, 31));
        leDist3->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leDist3->setReadOnly(false);
        chkActif3 = new QCheckBox(centralWidget);
        chkActif3->setObjectName(QStringLiteral("chkActif3"));
        chkActif3->setEnabled(false);
        chkActif3->setGeometry(QRect(30, 457, 20, 20));
        chkActif3->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(140, 460, 61, 16));
        label_5->setFont(font1);
        label_5->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        chkActif4 = new QCheckBox(centralWidget);
        chkActif4->setObjectName(QStringLiteral("chkActif4"));
        chkActif4->setEnabled(false);
        chkActif4->setGeometry(QRect(30, 496, 21, 21));
        chkActif4->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(140, 500, 71, 16));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(230, 170, 141, 31));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        label_14->setFont(font4);
        label_14->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        leMessageConnexion = new QLineEdit(centralWidget);
        leMessageConnexion->setObjectName(QStringLiteral("leMessageConnexion"));
        leMessageConnexion->setEnabled(false);
        leMessageConnexion->setGeometry(QRect(410, 150, 291, 31));
        leMessageConnexion->setFont(font);
        leMessageConnexion->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leMessageConnexion->setClearButtonEnabled(false);
        Button_connexion = new QPushButton(centralWidget);
        Button_connexion->setObjectName(QStringLiteral("Button_connexion"));
        Button_connexion->setGeometry(QRect(560, 230, 141, 21));
        Button_connexion->setFont(font);
        Button_connexion->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#478bf9;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#43a1ff;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}"));
        lePortServeur = new QLineEdit(centralWidget);
        lePortServeur->setObjectName(QStringLiteral("lePortServeur"));
        lePortServeur->setGeometry(QRect(90, 220, 91, 31));
        lePortServeur->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        lePortServeur->setInputMethodHints(Qt::ImhDigitsOnly);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 220, 81, 31));
        label_10->setFont(font2);
        label_10->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        Button_deconnexion = new QPushButton(centralWidget);
        Button_deconnexion->setObjectName(QStringLiteral("Button_deconnexion"));
        Button_deconnexion->setGeometry(QRect(410, 230, 141, 21));
        Button_deconnexion->setFont(font);
        Button_deconnexion->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#d34836;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#ff4343;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(140, 310, 621, 20));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 300, 121, 20));
        label_15->setFont(font1);
        label_15->setStyleSheet(QStringLiteral("color: #5499c7 ;"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 360, 118, 3));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 110, 71, 20));
        label_16->setFont(font1);
        label_16->setStyleSheet(QStringLiteral("color: #5499c7 ;"));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(100, 120, 651, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(230, 200, 141, 31));
        label_17->setFont(font4);
        label_17->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(230, 230, 141, 31));
        label_18->setFont(font4);
        label_18->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        leEtat_reseau = new QLineEdit(centralWidget);
        leEtat_reseau->setObjectName(QStringLiteral("leEtat_reseau"));
        leEtat_reseau->setEnabled(false);
        leEtat_reseau->setGeometry(QRect(410, 190, 291, 31));
        leEtat_reseau->setFont(font);
        leEtat_reseau->setStyleSheet(QLatin1String("	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#e8eeef;\n"
"	color:#8a97a0;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;"));
        leEtat_reseau->setClearButtonEnabled(false);
        line_7 = new QFrame(centralWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(-10, 530, 1401, 20));
        line_7->setStyleSheet(QStringLiteral(""));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        Button_connexion_camera = new QPushButton(centralWidget);
        Button_connexion_camera->setObjectName(QStringLiteral("Button_connexion_camera"));
        Button_connexion_camera->setGeometry(QRect(560, 60, 141, 21));
        Button_connexion_camera->setFont(font);
        Button_connexion_camera->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#478bf9;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#43a1ff;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}"));
        line_10 = new QFrame(centralWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(10, 400, 201, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(10, 440, 201, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(10, 480, 201, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(110, 10, 641, 20));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 0, 101, 20));
        label_19->setFont(font1);
        label_19->setStyleSheet(QStringLiteral("color: #5499c7 ;"));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(780, 0, 71, 16));
        label_22->setFont(font1);
        label_22->setStyleSheet(QStringLiteral("color:#5499c7;"));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(350, 350, 101, 16));
        label_23->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(750, 20, 20, 511));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Button_deconnexion_camera = new QPushButton(centralWidget);
        Button_deconnexion_camera->setObjectName(QStringLiteral("Button_deconnexion_camera"));
        Button_deconnexion_camera->setGeometry(QRect(410, 60, 141, 21));
        Button_deconnexion_camera->setFont(font);
        Button_deconnexion_camera->setStyleSheet(QLatin1String("QPushButton {\n"
"padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#d34836;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	padding:6px 0 6px 0;\n"
"	font:bold 13px Arial;\n"
"	background:#ff4343;\n"
"	color:#fff;\n"
"	border-radius:2px;\n"
"	width:100px;\n"
"	border:none;\n"
"}"));
        checkreseau = new QCheckBox(centralWidget);
        checkreseau->setObjectName(QStringLiteral("checkreseau"));
        checkreseau->setEnabled(false);
        checkreseau->setGeometry(QRect(710, 190, 21, 31));
        checkreseau->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        checkcamera = new QCheckBox(centralWidget);
        checkcamera->setObjectName(QStringLiteral("checkcamera"));
        checkcamera->setEnabled(false);
        checkcamera->setGeometry(QRect(710, 60, 21, 21));
        checkcamera->setStyleSheet(QLatin1String("QCheckBox {\n"
"}\n"
"\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:unchecked:pressed {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:hover {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:checked:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:hover {\n"
"image: url(:/boutons/ressource/uncheck.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:indeterminate:pressed {\n"
"image: url(:/boutons/ressource/check.png);\n"
"}\n"
""));
        video = new VlcWidgetVideo(centralWidget);
        video->setObjectName(QStringLiteral("video"));
        video->setGeometry(QRect(770, 20, 571, 511));
        label_camera_logo = new QLabel(video);
        label_camera_logo->setObjectName(QStringLiteral("label_camera_logo"));
        label_camera_logo->setGeometry(QRect(30, 0, 531, 511));
        label_camera_logo->setPixmap(QPixmap(QString::fromUtf8(":/divers/ressource/camera.png")));
        label_camera_logo->setScaledContents(false);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 50, 331, 16));
        label_7->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 70, 91, 16));
        label_8->setStyleSheet(QStringLiteral("	color:#8a97a0;"));
        MainWindow->setCentralWidget(centralWidget);
        line_9->raise();
        quitButton->raise();
        chkActif1->raise();
        chkActif2->raise();
        slDist1->raise();
        slDist2->raise();
        chkSens2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        leDist1->raise();
        leDist2->raise();
        label_6->raise();
        label_9->raise();
        leIPServeur->raise();
        leMessage->raise();
        label_11->raise();
        leDist4->raise();
        slDist4->raise();
        chkSens4->raise();
        slDist3->raise();
        chkSens3->raise();
        leDist3->raise();
        chkActif3->raise();
        label_5->raise();
        chkActif4->raise();
        label_13->raise();
        label_14->raise();
        leMessageConnexion->raise();
        Button_connexion->raise();
        label_10->raise();
        Button_deconnexion->raise();
        line->raise();
        label_15->raise();
        line_3->raise();
        line_4->raise();
        label_17->raise();
        label_18->raise();
        leEtat_reseau->raise();
        line_7->raise();
        Button_connexion_camera->raise();
        line_10->raise();
        line_11->raise();
        line_12->raise();
        label_19->raise();
        label_22->raise();
        label_23->raise();
        label_16->raise();
        lePortServeur->raise();
        line_2->raise();
        Button_deconnexion_camera->raise();
        checkreseau->raise();
        checkcamera->raise();
        chkSens1->raise();
        video->raise();
        label_7->raise();
        label_8->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1350, 19));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Console de controle du robot", Q_NULLPTR));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        quitButton->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        chkActif1->setText(QString());
        chkActif2->setText(QString());
        chkSens2->setText(QString());
        chkSens1->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Actif", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Sens", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Moteur 1", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Moteur 2", Q_NULLPTR));
        leDist1->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        leDist2->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "PWM", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Serveur :", Q_NULLPTR));
        leIPServeur->setText(QApplication::translate("MainWindow", "127.0.0.1", Q_NULLPTR));
        leMessage->setText(QApplication::translate("MainWindow", "1,0,0,0,2,0,0,0,3,0,0,0,4,0,0,0,4", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Trame :", Q_NULLPTR));
        leDist4->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        chkSens4->setText(QString());
        chkSens3->setText(QString());
        leDist3->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        chkActif3->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Moteur 3", Q_NULLPTR));
        chkActif4->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "Moteur 4", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Veuillez indiquer ", Q_NULLPTR));
        leMessageConnexion->setText(QApplication::translate("MainWindow", "127.0.0.1:8888", Q_NULLPTR));
        Button_connexion->setText(QApplication::translate("MainWindow", "Connexion", Q_NULLPTR));
        lePortServeur->setText(QApplication::translate("MainWindow", "8888", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Port       :", Q_NULLPTR));
        Button_deconnexion->setText(QApplication::translate("MainWindow", "D\303\251connexion", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Controle Moteur", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Etat Robot", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "l'adresse et le port du", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "serveur distant.", Q_NULLPTR));
        leEtat_reseau->setText(QApplication::translate("MainWindow", "Actuellement d\303\251connect\303\251.", Q_NULLPTR));
        Button_connexion_camera->setText(QApplication::translate("MainWindow", "Connexion", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Etat Camera", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "Flux video", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Maximum : 999", Q_NULLPTR));
        Button_deconnexion_camera->setText(QApplication::translate("MainWindow", "D\303\251connexion", Q_NULLPTR));
        checkreseau->setText(QString());
        checkcamera->setText(QString());
        label_camera_logo->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "Status de la camera, veuillez renseigner les champs", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ci dessous.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
