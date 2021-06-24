#ifndef TMTEDARIKCIFORMU_H
#define TMTEDARIKCIFORMU_H

#include <QDialog>
#include <Veri/tanimlar.h>

namespace Ui {
class TMTedarikciFormu;
}

class TMTedarikciFormu : public QDialog
{
    Q_OBJECT

public:
    explicit TMTedarikciFormu(QWidget *parent = nullptr);
    ~TMTedarikciFormu();

    TMTedarikciPtr getVeri() const;
    void setVeri(const TMTedarikciPtr& value);


private slots:
    void on_tabTedarikciIslemleri_tabCloseRequested(int index);

    void on_btnYeniTedarikci_clicked();

private:
    Ui::TMTedarikciFormu *ui;
    TMTedarikciPtr veri;
};

#endif // TMTEDARIKCIFORMU_H
