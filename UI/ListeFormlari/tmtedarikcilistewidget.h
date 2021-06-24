#ifndef TMTEDARIKCILISTEWIDGET_H
#define TMTEDARIKCILISTEWIDGET_H

#include <QWidget>

namespace Ui {
class TMTedarikciListeWidget;
}

class TMTedarikciListeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TMTedarikciListeWidget(QWidget *parent = nullptr);
    ~TMTedarikciListeWidget();

private:
    Ui::TMTedarikciListeWidget *ui;
};

#endif // TMTEDARIKCILISTEWIDGET_H
