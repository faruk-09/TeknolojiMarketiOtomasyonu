#include "tmurunalisbilgisiyoneticisi.h"
#include<Veri/VeriSiniflari/tmurunalisbilgileri.h>

TMUrunAlisBilgisiYoneticisi::TMUrunAlisBilgisiYoneticisi(QObject *parent) : QObject(parent)
{

}

TMUrunAlisBilgisiYoneticisi::Ptr TMUrunAlisBilgisiYoneticisi::kopyaOlustur(TMUrunAlisBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setUrunAlisFiyati(kaynak->getUrunAlisFiyati());
    kopya->setUrunAlisMiktari(kaynak->getUrunAlisMiktari());


    return kopya;
}
