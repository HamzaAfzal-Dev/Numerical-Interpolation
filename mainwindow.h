#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_initialCalculationButton_clicked();

    void on_clearFields_clicked();

    void on_calculateInterpolation_clicked();

private:
    Ui::MainWindow *ui;
    double delta1Value;
    double delta2Value;
    double delta3Value;
    double delta4Value;
    double delta5Value;
    double delta6Value;
    double delta7Value;
    double delta21Value;
    double delta22Value;
    double delta23Value;
    double delta24Value;
    double delta25Value;
    double delta26Value;
    double delta31Value;
    double delta32Value;
    double delta33Value;
    double delta34Value;
    double delta35Value;
    double delta41Value;
    double delta42Value;
    double delta43Value;
    double delta44Value;
    double delta51Value;
    double delta52Value;
    double delta53Value;
    double delta61Value;
    double delta62Value;
    double delta71Value;
    double pValue;
    void NewtonsForwardInterpolation();
};
#endif // MAINWINDOW_H
