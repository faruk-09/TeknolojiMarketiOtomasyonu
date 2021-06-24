#include "tmurunbilgisiyoneticisi.h"
#include <Veri/VeriSiniflari/tmurunbilgileri.h>

TMUrunBilgisiYoneticisi::TMUrunBilgisiYoneticisi(QObject *parent) : QObject(parent) ,TemelVeriYoneticisi<TMUrunBilgileri, TMUrunBilgileriPtr>()
{

}

TMUrunBilgisiYoneticisi::Ptr TMUrunBilgisiYoneticisi::kopyaOlustur(TMUrunBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setUrunAdi(kaynak->getUrunAdi());
    kopya->setUrunDetayi(kaynak->getUrunDetayi());
    kopya->setUrunTuru(kaynak->getUrunTuru());
    kopya->setIndirimOrani(kaynak->getIndirimOrani());
    kopya->setStokAdeti(kaynak->getStokAdeti());
    kopya->setUrunFiyati(kaynak->getUrunFiyati());

    return kopya;
}











