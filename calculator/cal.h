#ifndef CAL_H
#define CAL_H

#include <QMainWindow>

// Use the standard UI namespace which is tied to the .ui file
namespace Ui {
class cal;
}

class cal : public QMainWindow
{
    // Declares our class as a QObject which is the base class
    // for all Qt objects
    // QObjects handle events
    Q_OBJECT

public:

    // Declare a constructor and by passing 0 we state this widget
    // has no parent
    explicit cal(QWidget *parent = 0);
    ~cal();

private:
    Ui::cal *ui;

    // These slots are executed when a signal is
    // submitted (Ex. Number button is clicked)
private slots :
    void NumPressed();
    void MathButtonPressed();
    void EqualButtonPressed();
    void ChangeNumberSign();
    void ClearButtonPressed();
    void Trig();
};
#endif
