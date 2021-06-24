#ifndef TEDARIKCIDUZENLEME_H
#define TEDARIKCIDUZENLEME_H

#include <QWidget>
#include<Veri/tanimlar.h>

namespace Ui {
class TedarikciDuzenleme;
}

class TedarikciDuzenleme : public QWidget
{
    Q_OBJECT

public:
    explicit TedarikciDuzenleme(QWidget *parent = nullptr);
    ~TedarikciDuzenleme();
    TMTedarikciPtr getVeri() const;
    void setVeri(const TMTedarikciPtr &value);

signals:
    void kaydetKapat();
    void iptalKapat();

private slots:
    void on_btnKaydet_clicked();

    void on_btnIptal_clicked();

private:
    Ui::TedarikciDuzenleme *ui;
    TMTedarikciPtr veri;
};

#endif // TEDARIKCIDUZENLEME_H
