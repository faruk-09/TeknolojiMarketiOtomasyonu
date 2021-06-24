#include "tmsatisfaturasi.h"

TMSatisFaturasi::TMSatisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TMSatisFaturasi::getId() const
{
    return urunSatisFaturaId;
}

void TMSatisFaturasi::setId(const IdTuru &value)
{
    if(value==urunSatisFaturaId)
        return;
    urunSatisFaturaId = value;
   emit idDegisti(urunSatisFaturaId);
}

Tarih TMSatisFaturasi::getUrunSatisTarihi() const
{
    return urunSatisTarihi;
}

void TMSatisFaturasi::setUrunSatisTarihi(const Tarih &value)
{
    if(value==urunSatisTarihi)
        return;
    urunSatisTarihi = value;
    emit urunSatisTarihiDegisti(urunSatisTarihi);
}

Metin TMSatisFaturasi::getSatisFaturaNo() const
{
    return satisFaturaNo;
}

void TMSatisFaturasi::setSatisFaturaNo(const Metin &value)
{
    if(value==satisFaturaNo)
        return;
    satisFaturaNo = value;
    emit satisFaturaNoDegisti(satisFaturaNo);
}

QDataStream &operator<<(QDataStream &a, const TMSatisFaturasiPtr &b)
{
    a << b->getId() << b->getUrunSatisTarihi() << b->getSatisFaturaNo();
    return a;
}
QDataStream &operator>>(QDataStream &a, TMSatisFaturasiPtr &b)
{
    IdTuru urunSatisFaturaId;
    Tarih urunSatisTarihi;
    Metin satisFaturaNo;

    a >> urunSatisFaturaId >> urunSatisTarihi >> satisFaturaNo;

    b = std::make_shared<TMSatisFaturasi>();

    b->setId(urunSatisFaturaId);
    b->setUrunSatisTarihi(urunSatisTarihi);
    b->setSatisFaturaNo(satisFaturaNo);

    return a;
}


