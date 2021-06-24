#include "tmtedarikciyoneticisi.h"
#include<Veri/VeriSiniflari/tmtedarikci.h>

TMTedarikciYoneticisi::TMTedarikciYoneticisi(QObject *parent) : QObject(parent)
{

}

TMTedarikciYoneticisi::Ptr TMTedarikciYoneticisi::kopyaOlustur(TMTedarikciYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setTedarikciAdi(kaynak->getTedarikciAdi());
    kopya->setTedarikciYetkiliKisi(kaynak->getTedarikciYetkiliKisi());
    kopya->setTedarikciTelefon(kaynak->getTedarikciTelefon());
    kopya->setTedarikciMailAdresi(kaynak->getTedarikciMailAdresi());
    kopya->setTedarikciAdresi(kaynak->getTedarikciAdresi());


    return kopya;
}


