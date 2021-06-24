#include "tmanapencere.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TMAnaPencere w;
    w.show();
    return a.exec();
}

#include <Veri/VeriSiniflari/tmurunbilgileri.h>
#include <Veri/VeriYoneticileri/tmurunbilgisiyoneticisi.h>
/*
void deneme()
{
    TMUrunBilgisiYoneticisi yonetici;

    auto yeni = yonetici.yeni();
    yeni -> setUrunAdi("Ram");
    yeni -> setUrunDetayi("16GB DDR4 Ram");

    yonetici.ekle(yeni);

    yeni = yonetici.yeni();
    yeni->setUrunAdi("Anakart");
    yeni->setUrunDetayi("Gaming Anakart");


}
*/
#include <Veri/tmgenelveriyoneticisi.h>
#include<QDataStream>

void deneme()
{
    auto urunler = TMGenelVeriYoneticisi::mfa().getUrunBilgileri().yeni();
    TMGenelVeriYoneticisi::mfa().getUrunBilgileri().ekle(urunler);

//#include <Veri/tmgenelveriyoneticisi.h>
//#include<QDataStream>


    QDataStream dosya;

    dosya << TMGenelVeriYoneticisi::mfa();
}


