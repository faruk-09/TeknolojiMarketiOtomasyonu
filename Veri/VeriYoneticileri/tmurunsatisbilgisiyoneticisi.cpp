#include "tmurunsatisbilgisiyoneticisi.h"
#include<Veri/VeriSiniflari/tmurunsatisbilgileri.h>

TMUrunSatisBilgisiYoneticisi::TMUrunSatisBilgisiYoneticisi(QObject *parent) : QObject(parent)
{

}

TMUrunSatisBilgisiYoneticisi::Ptr TMUrunSatisBilgisiYoneticisi::kopyaOlustur(TMUrunSatisBilgisiYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setUrunSatisFiyati(kaynak->getUrunSatisFiyati());
    kopya->setUrunSatisMiktari(kaynak->getUrunSatisMiktari());


    return kopya;
}
