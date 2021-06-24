#ifndef TMYENIURUNTANIMLAMAFORMU_H
#define TMYENIURUNTANIMLAMAFORMU_H

#include <QDialog>
#include<Veri/tanimlar.h>

namespace Ui {
class TMYeniUrunTanimlamaFormu;
}

class TMYeniUrunTanimlamaFormu : public QDialog
{
    Q_OBJECT

public:
    explicit TMYeniUrunTanimlamaFormu(QWidget *parent = nullptr);
    ~TMYeniUrunTanimlamaFormu();

    TMUrunBilgileriPtr getVeri() const;
    void setVeri(const TMUrunBilgileriPtr &value);

private:
    Ui::TMYeniUrunTanimlamaFormu *ui;

    TMUrunBilgileriPtr veri;
};

#endif // TMYENIURUNTANIMLAMAFORMU_H
