#include "tmyeniuruntanimlamaformu.h"
#include "ui_tmyeniuruntanimlamaformu.h"
#include<Veri/VeriSiniflari/tmurunbilgileri.h>

TMYeniUrunTanimlamaFormu::TMYeniUrunTanimlamaFormu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TMYeniUrunTanimlamaFormu)
{
    ui->setupUi(this);
}

TMYeniUrunTanimlamaFormu::~TMYeniUrunTanimlamaFormu()
{
    delete ui;
}

TMUrunBilgileriPtr TMYeniUrunTanimlamaFormu::getVeri() const
{

    veri->setUrunAdi(ui->leUrunAdi->text());
    if(ui->rbAnakart->isChecked()) {
        veri->setUrunTuru(ITAnakart);

    } else if (ui->rbEkranKarti->isChecked()) {
        veri->setUrunTuru(ITEkranKarti);

    } else if (ui->rbIslemci->isChecked()) {
        veri->setUrunTuru((ITIslemci));

    }else if (ui->rbRam->isChecked()) {
        veri->setUrunTuru((ITRam));

     }else if (ui->rbHardDisk->isChecked()){
        veri->setUrunTuru((ITHardDisk));

     }else if (ui->rbKasa->isChecked()){
        veri->setUrunTuru((ITKasa));

     }else if (ui->rbGucKaynagi->isChecked()){
        veri->setUrunTuru((ITGuckaynagi));

     }else if(ui->rbFare->isChecked()){
        veri->setUrunTuru((ITFare));

     }else if(ui->rbMonitor->isChecked()){
        veri->setUrunTuru((ITMonitor));

     }else if(ui->rbKlavye->isChecked()){
        veri->setUrunTuru((ITKlavye));
     }
    veri->setUrunDetayi(ui->pteUrunDetayi->toPlainText());
    veri->setUrunFiyati(ui->dsbUrunFiyati->value());
    veri->setIndirimOrani(ui->dsbIndirimOrani->value());
    veri->setStokAdeti(ui->sbStokAdeti->value());


    return veri;
}

void TMYeniUrunTanimlamaFormu::setVeri(const TMUrunBilgileriPtr &value)
{
    veri = value;

    ui->leUrunAdi->setText(veri->getUrunAdi());

    switch (veri->getUrunTuru()){

   case ITAnakart:
    ui->rbAnakart->setChecked(true);
    break;

   case ITIslemci:
        ui->rbIslemci->setChecked(true);
        break;

   case ITRam:
        ui->rbRam->setChecked(true);
        break;

    case ITHardDisk:
        ui->rbHardDisk->setChecked(true);
        break;

    case ITKasa:
        ui->rbKasa->setChecked(true);
        break;

    case ITEkranKarti:
        ui->rbEkranKarti->setChecked(true);
        break;

    case ITGuckaynagi:
        ui->rbGucKaynagi->setChecked(true);
        break;

    case ITMonitor:
        ui->rbMonitor->setChecked(true);
        break;

    case ITFare:
        ui->rbFare->setChecked(true);
        break;

    default:
        ui->rbKlavye->setChecked(true);

    }

    ui->pteUrunDetayi->document()->setPlainText(veri->getUrunDetayi());
    ui->dsbUrunFiyati->setValue(veri->getUrunFiyati());
    ui->dsbIndirimOrani->setValue(veri->getIndirimOrani());
    ui->sbStokAdeti->setValue(veri->getStokAdeti());






}
