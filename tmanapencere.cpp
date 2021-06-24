#include "tmanapencere.h"
#include "ui_tmanapencere.h"

#include<QDir>
#include<QFile>
#include<QDataStream>
#include <QStandardPaths>

#include<Veri/tmgenelveriyoneticisi.h>

#include<UI/VeriFormlari/tmyeniuruntanimlamaformu.h>

#include<Veri/VeriSiniflari/tmurunbilgileri.h>
#include<UI/VeriFormlari/tmtedarikciformu.h>

#include<UI/ListeFormlari/tmurunlistesi.h>

TMAnaPencere::TMAnaPencere(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TMAnaPencere)
{
    ui->setupUi(this);


    QString dosya_yolu=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    QDir dosya_klasoru(dosya_yolu);

    if (dosya_klasoru.exists("teknoloji.db")) {
        QFile dosya(dosya_yolu + "/eczane.db");

      if(dosya.open(QIODevice::ReadOnly))  {
        QDataStream oku(&dosya);

        oku >> TMGenelVeriYoneticisi::mfa();

        dosya.close();
      }


    }


}

TMAnaPencere::~TMAnaPencere()
{
    delete ui;

//Verilerimizi dosyadan okuyalım

   QString dosya_yolu=QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);

   QFile dosya(dosya_yolu + "/teknoloji.db");
    if (dosya.open(QIODevice::WriteOnly)) {
        QDataStream yaz(&dosya);

        yaz << TMGenelVeriYoneticisi::mfa();

        dosya.close();

    }

}


void TMAnaPencere::on_actionTedarikciler_triggered()
{

    TMTedarikciFormu form;
    form.exec();

}

void TMAnaPencere::on_actionMevcuturunler_triggered()
{
    TMUrunListesi form;

    form.exec();
}

void TMAnaPencere::on_actionYeni_Tedarikci_Ekleme_triggered()
{
    TMTedarikciFormu form;
    form.exec();
}


void TMAnaPencere::on_actionYeni_Tedarikci_Tanimla_triggered()
{
    TMTedarikciFormu form;
    form.exec();
}

void TMAnaPencere::on_actionYeni_Tedarikci_Tanimlar_triggered()
{
    TMTedarikciFormu form;
    form.exec();
}

void TMAnaPencere::on_actionYeniurun_Tanimlama_triggered()
{
    TMYeniUrunTanimlamaFormu form;
    auto veri=TMGenelVeriYoneticisi::mfa().getUrunBilgileri().yeni();

    form.setVeri(veri);
    form.setWindowTitle(tr("Yeni Ürün Ekleme"));

    if(form.exec()==QDialog::Accepted) {
        form.getVeri();

        TMGenelVeriYoneticisi::mfa().getUrunBilgileri().ekle(veri);
    }
}
