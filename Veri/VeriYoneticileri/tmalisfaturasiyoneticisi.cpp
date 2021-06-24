#include "tmalisfaturasiyoneticisi.h"
#include<Veri/VeriSiniflari/tmalisfaturasi.h>

TMAlisFaturasiYoneticisi::TMAlisFaturasiYoneticisi(QObject *parent) : QObject(parent)
{

}

TMAlisFaturasiYoneticisi::Ptr TMAlisFaturasiYoneticisi::kopyaOlustur(TMAlisFaturasiYoneticisi::Ptr kaynak) const
{

    Ptr kopya = yeni();

    kopya->setId(kaynak->getId());
    kopya->setFaturaNo(kaynak->getFaturaNo());
    kopya->setUrunAlisTarihi(kaynak->getUrunAlisTarihi());


    return kopya;
}
