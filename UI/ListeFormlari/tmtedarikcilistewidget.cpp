#include "tmtedarikcilistewidget.h"
#include "ui_tmtedarikcilistewidget.h"

TMTedarikciListeWidget::TMTedarikciListeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TMTedarikciListeWidget)
{
    ui->setupUi(this);
}

TMTedarikciListeWidget::~TMTedarikciListeWidget()
{
    delete ui;
}
