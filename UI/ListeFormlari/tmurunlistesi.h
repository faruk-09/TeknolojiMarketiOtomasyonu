#ifndef TMURUNLISTESI_H
#define TMURUNLISTESI_H

#include <QDialog>

#include<Veri/VeriYoneticileri/tmurunbilgisiyoneticisi.h>

namespace Ui {
class TMUrunListesi;
}

class TMUrunListesi : public QDialog
{
    Q_OBJECT

public:
    explicit TMUrunListesi(QWidget *parent = nullptr);
    ~TMUrunListesi();

private slots:
    void on_btnAra_clicked();
    void ara();
private:
    void listeGuncelle();
    void arama_yap();

    Ui::TMUrunListesi *ui;
    TMUrunBilgisiYoneticisi::VeriListesi liste;
};

#endif // TMURUNLISTESI_H
