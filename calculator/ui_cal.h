/********************************************************************************
** Form generated from reading UI file 'cal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAL_H
#define UI_CAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cal
{
public:
    QWidget *centralwidget;
    QLineEdit *Display;
    QPushButton *Button8;
    QPushButton *Button9;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button7;
    QPushButton *Divide;
    QPushButton *Multiply;
    QPushButton *Add;
    QPushButton *Button0;
    QPushButton *Subtract;
    QPushButton *Equals;
    QPushButton *Clear;
    QPushButton *sin;
    QPushButton *cos;
    QPushButton *tan;
    QPushButton *NaturaLog;
    QPushButton *SquareRoot;
    QPushButton *CubeRoot;
    QPushButton *Log;
    QPushButton *Exponent;
    QPushButton *arcsin;
    QPushButton *arccos;
    QPushButton *arctan;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cal)
    {
        if (cal->objectName().isEmpty())
            cal->setObjectName(QString::fromUtf8("cal"));
        cal->resize(497, 428);
        cal->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color:Silver;\n"
"	border: 3px solid gray;\n"
"	padding: 5px;\n"
"}"));
        centralwidget = new QWidget(cal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setGeometry(QRect(0, 0, 481, 91));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color:Lavender;\n"
"	border :	1px solid gray;\n"
"	color :	B0 E0 E6;\n"
"}"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setGeometry(QRect(140, 110, 81, 31));
        sizePolicy.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setGeometry(QRect(280, 110, 81, 31));
        sizePolicy.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setGeometry(QRect(10, 150, 81, 31));
        sizePolicy.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setGeometry(QRect(140, 150, 81, 31));
        sizePolicy.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setGeometry(QRect(280, 150, 81, 31));
        sizePolicy.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setGeometry(QRect(10, 190, 81, 31));
        sizePolicy.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setGeometry(QRect(140, 190, 81, 31));
        sizePolicy.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setGeometry(QRect(280, 190, 81, 31));
        sizePolicy.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setGeometry(QRect(10, 110, 81, 31));
        sizePolicy.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(400, 110, 81, 31));
        sizePolicy.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setGeometry(QRect(400, 150, 81, 31));
        sizePolicy.setHeightForWidth(Multiply->sizePolicy().hasHeightForWidth());
        Multiply->setSizePolicy(sizePolicy);
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Add = new QPushButton(centralwidget);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(400, 190, 81, 31));
        sizePolicy.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setGeometry(QRect(140, 230, 81, 31));
        sizePolicy.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:LemonChiffon	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setGeometry(QRect(400, 230, 81, 31));
        sizePolicy.setHeightForWidth(Subtract->sizePolicy().hasHeightForWidth());
        Subtract->setSizePolicy(sizePolicy);
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setGeometry(QRect(280, 230, 81, 31));
        sizePolicy.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setGeometry(QRect(10, 230, 81, 31));
        sizePolicy.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Chartreuse;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(10, 270, 81, 31));
        sizePolicy.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy);
        sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(140, 270, 81, 31));
        sizePolicy.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy);
        cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(280, 270, 81, 31));
        sizePolicy.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy);
        tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        NaturaLog = new QPushButton(centralwidget);
        NaturaLog->setObjectName(QString::fromUtf8("NaturaLog"));
        NaturaLog->setGeometry(QRect(400, 270, 81, 31));
        sizePolicy.setHeightForWidth(NaturaLog->sizePolicy().hasHeightForWidth());
        NaturaLog->setSizePolicy(sizePolicy);
        NaturaLog->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        SquareRoot = new QPushButton(centralwidget);
        SquareRoot->setObjectName(QString::fromUtf8("SquareRoot"));
        SquareRoot->setGeometry(QRect(10, 310, 81, 31));
        sizePolicy.setHeightForWidth(SquareRoot->sizePolicy().hasHeightForWidth());
        SquareRoot->setSizePolicy(sizePolicy);
        SquareRoot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        CubeRoot = new QPushButton(centralwidget);
        CubeRoot->setObjectName(QString::fromUtf8("CubeRoot"));
        CubeRoot->setGeometry(QRect(140, 310, 81, 31));
        sizePolicy.setHeightForWidth(CubeRoot->sizePolicy().hasHeightForWidth());
        CubeRoot->setSizePolicy(sizePolicy);
        CubeRoot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Log = new QPushButton(centralwidget);
        Log->setObjectName(QString::fromUtf8("Log"));
        Log->setGeometry(QRect(280, 310, 81, 31));
        sizePolicy.setHeightForWidth(Log->sizePolicy().hasHeightForWidth());
        Log->setSizePolicy(sizePolicy);
        Log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        Exponent = new QPushButton(centralwidget);
        Exponent->setObjectName(QString::fromUtf8("Exponent"));
        Exponent->setGeometry(QRect(400, 310, 81, 31));
        sizePolicy.setHeightForWidth(Exponent->sizePolicy().hasHeightForWidth());
        Exponent->setSizePolicy(sizePolicy);
        Exponent->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        arcsin = new QPushButton(centralwidget);
        arcsin->setObjectName(QString::fromUtf8("arcsin"));
        arcsin->setGeometry(QRect(140, 350, 81, 31));
        sizePolicy.setHeightForWidth(arcsin->sizePolicy().hasHeightForWidth());
        arcsin->setSizePolicy(sizePolicy);
        arcsin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        arccos = new QPushButton(centralwidget);
        arccos->setObjectName(QString::fromUtf8("arccos"));
        arccos->setGeometry(QRect(280, 350, 81, 31));
        sizePolicy.setHeightForWidth(arccos->sizePolicy().hasHeightForWidth());
        arccos->setSizePolicy(sizePolicy);
        arccos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        arctan = new QPushButton(centralwidget);
        arctan->setObjectName(QString::fromUtf8("arctan"));
        arctan->setGeometry(QRect(400, 350, 81, 31));
        sizePolicy.setHeightForWidth(arctan->sizePolicy().hasHeightForWidth());
        arctan->setSizePolicy(sizePolicy);
        arctan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:Salmon;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:#7F FF D4	;\n"
"	border: 2px solid gray;\n"
"	padding: 5px;\n"
"}"));
        cal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 497, 22));
        cal->setMenuBar(menubar);
        statusbar = new QStatusBar(cal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        cal->setStatusBar(statusbar);

        retranslateUi(cal);

        QMetaObject::connectSlotsByName(cal);
    } // setupUi

    void retranslateUi(QMainWindow *cal)
    {
        cal->setWindowTitle(QCoreApplication::translate("cal", "cal", nullptr));
        Display->setText(QString());
        Button8->setText(QCoreApplication::translate("cal", "8", nullptr));
        Button9->setText(QCoreApplication::translate("cal", "9", nullptr));
        Button4->setText(QCoreApplication::translate("cal", "4", nullptr));
        Button5->setText(QCoreApplication::translate("cal", "5", nullptr));
        Button6->setText(QCoreApplication::translate("cal", "6", nullptr));
        Button1->setText(QCoreApplication::translate("cal", "1", nullptr));
        Button2->setText(QCoreApplication::translate("cal", "2", nullptr));
        Button3->setText(QCoreApplication::translate("cal", "3", nullptr));
        Button7->setText(QCoreApplication::translate("cal", "7", nullptr));
        Divide->setText(QCoreApplication::translate("cal", "/", nullptr));
        Multiply->setText(QCoreApplication::translate("cal", "*", nullptr));
        Add->setText(QCoreApplication::translate("cal", "+", nullptr));
        Button0->setText(QCoreApplication::translate("cal", "0", nullptr));
        Subtract->setText(QCoreApplication::translate("cal", "-", nullptr));
        Equals->setText(QCoreApplication::translate("cal", "=", nullptr));
        Clear->setText(QCoreApplication::translate("cal", "AC", nullptr));
        sin->setText(QCoreApplication::translate("cal", "Sin", nullptr));
        cos->setText(QCoreApplication::translate("cal", "Cos", nullptr));
        tan->setText(QCoreApplication::translate("cal", "Tan", nullptr));
        NaturaLog->setText(QCoreApplication::translate("cal", "ln", nullptr));
        SquareRoot->setText(QCoreApplication::translate("cal", "Sqrt", nullptr));
        CubeRoot->setText(QCoreApplication::translate("cal", "Cubert", nullptr));
        Log->setText(QCoreApplication::translate("cal", "Log", nullptr));
        Exponent->setText(QCoreApplication::translate("cal", "e^x", nullptr));
        arcsin->setText(QCoreApplication::translate("cal", "ArcSin", nullptr));
        arccos->setText(QCoreApplication::translate("cal", "ArcCos", nullptr));
        arctan->setText(QCoreApplication::translate("cal", "ArcTan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cal: public Ui_cal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAL_H
