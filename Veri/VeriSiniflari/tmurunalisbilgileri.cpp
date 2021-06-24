#include "tmurunalisbilgileri.h"

TMUrunAlisBilgileri::TMUrunAlisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TMUrunAlisBilgileri::getId() const
{
    return urunAlisId;
}

void TMUrunAlisBilgileri::setId(const IdTuru &value)
{
    if(value==urunAlisId)
        return;
    urunAlisId = value;
    emit idDegisti(urunAlisId);
}

TamSayi TMUrunAlisBilgileri::getUrunAlisMiktari() const
{
    return urunAlisMiktari;
}

void TMUrunAlisBilgileri::setUrunAlisMiktari(const TamSayi &value)
{
    if(value==urunAlisMiktari)
        return;
    urunAlisMiktari = value;
    emit urunAlisMiktariDegisti(urunAlisMiktari);
}

ParaBirimi TMUrunAlisBilgileri::getUrunAlisFiyati() const
{
    return urunAlisFiyati;
}

ParaBirimi TMUrunAlisBilgileri::getToplam() const
{
    return urunAlisFiyati* urunAlisMiktari;
}

void TMUrunAlisBilgileri::setUrunAlisFiyati(const ParaBirimi &value)
{
    if ( value==urunAlisFiyati )
        return;
    urunAlisFiyati = value;
    emit urunAlisFiyatiDegisti(urunAlisFiyati);
}

QDataStream &operator<<(QDataStream &a, const TMUrunAlisBilgileriPtr &b)
{
    a << b->getId() << b->getUrunAlisMiktari() << b->getUrunAlisFiyati();
    return a;

}
QDataStream &operator>>(QDataStream &a, TMUrunAlisBilgileriPtr &b)
{
    IdTuru urunAlisId;
    TamSayi urunAlisMiktari;
    ParaBirimi urunAlisFiyati;

    a >> urunAlisId >> urunAlisMiktari >> urunAlisFiyati;

    b=std::make_shared<TMUrunAlisBilgileri>();

    b->setId(urunAlisId);
    b->setUrunAlisMiktari(urunAlisMiktari);
    b->setUrunAlisFiyati(urunAlisFiyati);

    return a;
}


