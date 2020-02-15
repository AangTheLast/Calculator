#include "cal.h"
#include "ui_cal.h"
#include "math.h"

// Holds current value of calulation
double calVal = 0.0;

// Will define if this was the last math button clicked
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
bool sineTrigger= false;
bool cosTrigger= false;
bool tanTrigger= false;
bool arcsinTrigger= false;
bool arccosTrigger= false;
bool arctanTrigger= false;


// Constructor
cal::cal(QWidget *parent) :

    // Call the QMainWindow constructor
    QMainWindow(parent),

    // Create the UI class and assign it to the ui member
    ui(new Ui::cal)
{

    // Setup the UI
    ui->setupUi(this);

    // Put 0.0 in Display
    ui->Display->setText(QString::number(calVal));

    // Will hold references to all the number buttons
    QPushButton *numButtons[10];

    // Cycle through locating the buttons
    for(int i = 0; i < 10; ++i){
        QString butName = "Button" + QString::number(i);

        // Get the buttons by name and add to array
        numButtons[i] = cal::findChild<QPushButton *>(butName);

        // When the button is released call num_pressed()
        connect(numButtons[i], SIGNAL(released()), this,
                SLOT(NumPressed()));
}

    // Connect signals and slots for math buttons
    connect(ui->Add, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Subtract, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Multiply, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    // Connect equals button
    connect(ui->Equals, SIGNAL(released()), this,
            SLOT(EqualButtonPressed()));

    // Connect change sign
    //connect(ui->ChangeSign, SIGNAL(released()), this,
            //SLOT(ChangeNumberSign()));

    //Connect Clear Button
    connect(ui->Clear, SIGNAL(released()), this,
                SLOT(ClearButtonPressed()));
    //Connect Trig Buttons
    connect(ui->sin, SIGNAL(released()), this,
            SLOT(Trig()));
    connect(ui->cos, SIGNAL(released()), this,
            SLOT(Trig()));
    connect(ui->tan, SIGNAL(released()), this,
            SLOT(Trig()));
    connect(ui->arcsin, SIGNAL(released()), this,
            SLOT(Trig()));
    connect(ui->arccos, SIGNAL(released()), this,
            SLOT(Trig()));
    connect(ui->arctan, SIGNAL(released()), this,
            SLOT(Trig()));
}

cal::~cal()
{
    delete ui;
}

void cal::NumPressed(){

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get number on button
    QString butVal = button->text();

    // Get the value in the display
    QString displayVal = ui->Display->text();

    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){

        // calVal = butVal.toDouble();
        ui->Display->setText(butVal);

    } else {
        // Put the new number to the right of whats there
        QString newVal = displayVal + butVal;

        // Double version of number
        double dblNewVal = newVal.toDouble();

        // calVal = newVal.toDouble();

        // Set value in display and allow up to 16
        // digits before using exponents
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));

    }
}

void cal::MathButtonPressed(){

    // Cancel out previous math button clicks
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    // Store current value in Display
    QString displayVal = ui->Display->text();
    calVal = displayVal.toDouble();

    // Sender returns a pointer to the button pressed
    QPushButton *button = (QPushButton *)sender();

    // Get math symbol on the button
    QString butVal = button->text();

    if(QString::compare(butVal, "/", Qt::CaseInsensitive) == 0){
        divTrigger = true;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) == 0){
        multTrigger = true;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) == 0){
        addTrigger = true;
    } else {
        subTrigger = true;
    }

    // Clear display
    ui->Display->setText("");

}

void cal::EqualButtonPressed(){

    // Holds new calulation
    double solution = 0.0;

    // Get value in display
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();

    // Make sure a math button was pressed
    if(addTrigger || subTrigger || multTrigger || divTrigger ){
        if(addTrigger){
            solution = calVal + dblDisplayVal;
        } else if(subTrigger){
            solution = calVal - dblDisplayVal;
        } else if(multTrigger){
            solution = calVal * dblDisplayVal;
        } else {
            solution = calVal / dblDisplayVal;
        }
    }

    // Put solution in display
    ui->Display->setText(QString::number(solution));

}

void cal::ChangeNumberSign(){

    // Get the value in the display
    QString displayVal = ui->Display->text();

    // Regular expression checks if it is a number
    // plus sign
    QRegExp reg("[-+]?[0-9.]*");

    // If it is a number change the sign
    if(reg.exactMatch(displayVal)){
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;

        // Put solution in display
        ui->Display->setText(QString::number(dblDisplayValSign));
    }

}
void cal::ClearButtonPressed(){
    ui->Display->setText("Cleared");
    ui->Display->setText(QString::number(calVal=0));

}
void cal::Trig(){

     sineTrigger= false;
     cosTrigger= false;
     tanTrigger= false;
     arcsinTrigger= false;
     arccosTrigger= false;
     arctanTrigger= false;

     // Sender returns a pointer to the button pressed
     QPushButton *button = (QPushButton *)sender();

     // Get math symbol on the button
     QString butVal = button->text();
     if(QString::compare(butVal, "sin", Qt::CaseInsensitive) == 0){
         sineTrigger = true;
     } else if(QString::compare(butVal, "cos", Qt::CaseInsensitive) == 0){
         cosTrigger = true;
     } else if(QString::compare(butVal, "tan", Qt::CaseInsensitive) == 0){
         tanTrigger = true;
     } else if(QString::compare(butVal, "arcsin", Qt::CaseInsensitive) == 0){
         arcsinTrigger = true;
     } else if(QString::compare(butVal, "arccos", Qt::CaseInsensitive) == 0){
         arccosTrigger = true;
     } else if(QString::compare(butVal, "arctan", Qt::CaseInsensitive) == 0){
         arctanTrigger = true;
     }
     double solution=0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    ui->Display->setText(QString::number(sin(dblDisplayVal)));



    // Make sure a math button was pressed
    if(sineTrigger || cosTrigger || tanTrigger || arcsinTrigger || arccosTrigger || arctanTrigger ){
        if(sineTrigger){
            solution = sin(dblDisplayVal);
        } else if(cosTrigger){
            solution = cos(dblDisplayVal);
        } else if(tanTrigger){
            solution = tan(dblDisplayVal);
        } else if(arcsinTrigger){
            solution = asin(dblDisplayVal);
        } else if(arccosTrigger){
            solution = acos(dblDisplayVal);
        } else if(arctanTrigger){
            solution = atan(dblDisplayVal);
        }
        ui->Display->setText(QString::number(solution));
    }
    }

