#include "tmsatisfaturasiyoneticisi.h"
#include<Veri/VeriSiniflari/tmsatisfaturasi.h>

TMSatisFaturasiYoneticisi::TMSatisFaturasiYoneticisi(QObject *parent) : QObject(parent)
{

}

TMSatisFaturasiYoneticisi::Ptr TMSatisFaturasiYoneticisi::kopyaOlustur(TMSatisFaturasiYoneticisi::Ptr kaynak) const
{
    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setSatisFaturaNo(kaynak->getSatisFaturaNo());
    kopya->setUrunSatisTarihi(kaynak->getUrunSatisTarihi());


    return kopya;

}
