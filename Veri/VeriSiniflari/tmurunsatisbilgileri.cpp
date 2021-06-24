#include "tmurunsatisbilgileri.h"
#include <QtMath>

TMUrunSatisBilgileri::TMUrunSatisBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TMUrunSatisBilgileri::getId() const
{
    return urunSatisId;
}

void TMUrunSatisBilgileri::setId(const IdTuru &value)
{
    if(value==urunSatisId)
        return;
    urunSatisId = value;
    emit idDegisti(urunSatisId);
}

TamSayi TMUrunSatisBilgileri::getUrunSatisMiktari() const
{
    return urunSatisMiktari;
}

void TMUrunSatisBilgileri::setUrunSatisMiktari(const TamSayi &value)
{
    if(value==urunSatisMiktari)
        return;
    urunSatisMiktari = value;
    emit urunSatisMiktariDegisti(urunSatisMiktari);
}

ParaBirimi TMUrunSatisBilgileri::getUrunSatisFiyati() const
{
    return urunSatisFiyati;
}

ParaBirimi TMUrunSatisBilgileri::getToplam() const
{
    return urunSatisFiyati*urunSatisMiktari;
}

void TMUrunSatisBilgileri::setUrunSatisFiyati(const ParaBirimi &value)
{
    if (value==urunSatisFiyati)
        return;
    urunSatisFiyati = value;
    emit urunSatisFiyatiDegisti(urunSatisFiyati);
}

QDataStream &operator<<(QDataStream &a, const TMUrunSatisBilgileriPtr &b)
{
       a << b->getId() << b->getUrunSatisMiktari() << b->getUrunSatisFiyati();
       return a;
}
QDataStream &operator>>(QDataStream &a, TMUrunSatisBilgileriPtr &b)
{
    IdTuru urunSatisId;
    TamSayi urunSatisMiktari;
    ParaBirimi urunSatisFiyati;

    a>> urunSatisId >> urunSatisMiktari >> urunSatisFiyati;

    b=std::make_shared<TMUrunSatisBilgileri>();

    b->setId(urunSatisId);
    b->setUrunSatisMiktari(urunSatisMiktari);
    b->setUrunSatisFiyati(urunSatisFiyati);

    return a ;
}


