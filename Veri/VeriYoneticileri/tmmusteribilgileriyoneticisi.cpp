#include "tmmusteribilgileriyoneticisi.h"
#include<Veri/VeriSiniflari/tmmusteribilgileri.h>

TMMusteriBilgileriYoneticisi::TMMusteriBilgileriYoneticisi(QObject *parent) : QObject(parent)
{

}

TMMusteriBilgileriYoneticisi::Ptr TMMusteriBilgileriYoneticisi::kopyaOlustur(TMMusteriBilgileriYoneticisi::Ptr kaynak) const
{

    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setMusteriAdSoyad(kaynak->getMusteriAdSoyad());
    kopya->setMusteriTelefonNumarasi(kaynak->getMusteriTelefonNumarasi());
    kopya->setMusteriMailAdresi(kaynak->getMusteriMailAdresi());
    kopya->setMusteriAdresi(kaynak->getMusteriAdresi());


    return kopya;
}
