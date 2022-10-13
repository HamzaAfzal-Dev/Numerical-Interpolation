#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_initialCalculationButton_clicked()
{
    // improvments: array, methods
    // delta 1
    delta1Value = (ui->y2->value()) - (ui->y1->value());
    delta2Value = (ui->y3->value()) - (ui->y2->value());
    delta3Value = (ui->y4->value()) - (ui->y3->value());
    delta4Value = (ui->y5->value()) - (ui->y4->value());
    delta5Value = (ui->y6->value()) - (ui->y5->value());
    delta6Value = (ui->y7->value()) - (ui->y6->value());
    delta7Value = (ui->y8->value()) - (ui->y7->value());


    ui->delta1->setText(QString::number(delta1Value, 'f', 6));
    ui->delta2->setText(QString::number(delta2Value, 'f', 6));
    ui->delta3->setText(QString::number(delta3Value, 'f', 6));
    ui->delta4->setText(QString::number(delta4Value, 'f', 6));
    ui->delta5->setText(QString::number(delta5Value, 'f', 6));
    ui->delta6->setText(QString::number(delta6Value, 'f', 6));
    ui->delta7->setText(QString::number(delta7Value, 'f', 6));

    // delta^2
    delta21Value = delta2Value - delta1Value;
    delta22Value = delta3Value - delta2Value;
    delta23Value = delta4Value - delta3Value;
    delta24Value = delta5Value - delta4Value;
    delta25Value = delta6Value - delta5Value;
    delta26Value = delta7Value - delta6Value;


    ui->delta21->setText(QString::number(delta21Value, 'f', 6));
    ui->delta22->setText(QString::number(delta22Value, 'f', 6));
    ui->delta23->setText(QString::number(delta23Value, 'f', 6));
    ui->delta24->setText(QString::number(delta24Value, 'f', 6));
    ui->delta25->setText(QString::number(delta25Value, 'f', 6));
    ui->delta26->setText(QString::number(delta26Value, 'f', 6));

    // delta^3
    delta31Value = delta22Value - delta21Value;
    delta32Value = delta23Value - delta22Value;
    delta33Value = delta24Value - delta23Value;
    delta34Value = delta25Value - delta24Value;
    delta35Value = delta26Value - delta25Value;


    ui->delta31->setText(QString::number(delta31Value, 'f', 6));
    ui->delta32->setText(QString::number(delta32Value, 'f', 6));
    ui->delta33->setText(QString::number(delta33Value, 'f', 6));
    ui->delta34->setText(QString::number(delta34Value, 'f', 6));
    ui->delta35->setText(QString::number(delta35Value, 'f', 6));

    // delta^4
    delta41Value = delta32Value - delta31Value;
    delta42Value = delta33Value - delta32Value;
    delta43Value = delta34Value - delta33Value;
    delta44Value = delta35Value - delta34Value;


    ui->delta41->setText(QString::number(delta41Value, 'f', 6));
    ui->delta42->setText(QString::number(delta42Value, 'f', 6));
    ui->delta43->setText(QString::number(delta43Value, 'f', 6));
    ui->delta44->setText(QString::number(delta44Value, 'f', 6));

    // delta^5
    delta51Value = delta42Value - delta41Value;
    delta52Value = delta43Value - delta42Value;
    delta53Value = delta44Value - delta43Value;



    ui->delta51->setText(QString::number(delta51Value, 'f', 6));
    ui->delta52->setText(QString::number(delta52Value, 'f', 6));
    ui->delta53->setText(QString::number(delta53Value, 'f', 6));

    // delta^6
    delta61Value = delta52Value - delta51Value;
    delta62Value = delta53Value - delta52Value;


    ui->delta61->setText(QString::number(delta61Value, 'f', 6));
    ui->delta62->setText(QString::number(delta62Value, 'f', 6));

    // delta^7
    delta71Value = delta62Value - delta61Value;


    ui->delta71->setText(QString::number(delta71Value, 'f', 6));

    //value of p
    pValue = (ui->x->value() - ui->xNod->value()) / (ui->x2->value() - ui->x1->value());
    ui->p->setText(QString::number(pValue, 'f', 6));
}


void MainWindow::on_clearFields_clicked()
{
    delta1Value = delta2Value = delta3Value = delta4Value = delta5Value = delta6Value = delta7Value = delta21Value = delta22Value = delta23Value = delta24Value = delta25Value = delta26Value = delta31Value = delta32Value = delta33Value = delta34Value = delta35Value
    = delta41Value = delta42Value = delta43Value = delta44Value = delta51Value = delta52Value = delta53Value = delta61Value = delta62Value = delta71Value = 0;

    ui->y1->setValue(0);
    ui->y2->setValue(0);
    ui->y3->setValue(0);
    ui->y4->setValue(0);
    ui->y5->setValue(0);
    ui->y6->setValue(0);
    ui->y7->setValue(0);
    ui->y8->setValue(0);

    ui->x->setValue(0);
    ui->x1->setValue(0);
    ui->x2->setValue(0);
    ui->x3->setValue(0);
    ui->x4->setValue(0);
    ui->x5->setValue(0);
    ui->x6->setValue(0);
    ui->x7->setValue(0);
    ui->x8->setValue(0);
    ui->xNod->setValue(0);

    ui->p->setText("");
    ui->delta1->setText("");
    ui->delta2->setText("");
    ui->delta3->setText("");
    ui->delta4->setText("");
    ui->delta5->setText("");
    ui->delta6->setText("");
    ui->delta7->setText("");
    ui->delta21->setText("");
    ui->delta22->setText("");
    ui->delta23->setText("");
    ui->delta24->setText("");
    ui->delta25->setText("");
    ui->delta26->setText("");
    ui->delta31->setText("");
    ui->delta32->setText("");
    ui->delta33->setText("");
    ui->delta34->setText("");
    ui->delta35->setText("");
    ui->delta41->setText("");
    ui->delta42->setText("");
    ui->delta43->setText("");
    ui->delta44->setText("");
    ui->delta51->setText("");
    ui->delta52->setText("");
    ui->delta53->setText("");
    ui->delta61->setText("");
    ui->delta62->setText("");
    ui->delta71->setText("");

    ui->yNod->setValue(0);
    ui->yDeltaNod->setValue(0);
    ui->yDelta2Nod->setValue(0);
    ui->yDelta3Nod->setValue(0);
    ui->yDelta4Nod->setValue(0);
    ui->yDelta5Nod->setValue(0);
}


void MainWindow::on_calculateInterpolation_clicked()
{
    NewtonsForwardInterpolation();
}

void MainWindow::NewtonsForwardInterpolation(){
    bool yp = (ui->yNod->value()) + (pValue * ui->yDeltaNod->value()) + (((pValue * (pValue - 1)) * ui->yDelta2Nod->value()) / 2) +
            (((pValue * (pValue - 1) * (pValue - 2)) * ui->yDelta3Nod->value()) / 6) +
            (((pValue * (pValue - 1) * (pValue - 2) * (pValue - 3)) * ui->yDelta4Nod->value()) / 24) +
            (((pValue * (pValue - 1) * (pValue - 2) * (pValue - 3) * (pValue - 4)) * ui->yDelta5Nod->value()) / 120);

    ui->nForwardInterpolation->setText(QString::number(yp, 'f', 6));
}






















