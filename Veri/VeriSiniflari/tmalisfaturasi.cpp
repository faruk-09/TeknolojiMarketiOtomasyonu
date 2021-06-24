#include "tmalisfaturasi.h"

TMAlisFaturasi::TMAlisFaturasi(QObject *parent) : QObject(parent)
{

}

IdTuru TMAlisFaturasi::getId() const
{
    return urunAlisFaturaId;
}

void TMAlisFaturasi::setId(const IdTuru &value)
{
    if(value==urunAlisFaturaId)
        return;
    urunAlisFaturaId = value;
    emit idDegisti(urunAlisFaturaId);
}

Tarih TMAlisFaturasi::getUrunAlisTarihi() const
{
    return urunAlisTarihi;
}

void TMAlisFaturasi::setUrunAlisTarihi(const Tarih &value)
{
    if(value==urunAlisTarihi)
        return;
    urunAlisTarihi = value;
    emit urunAlisTarihiDegisti(urunAlisTarihi);
}

Metin TMAlisFaturasi::getFaturaNo() const
{
    return faturaNo;
}

void TMAlisFaturasi::setFaturaNo(const Metin &value)
{
    if(value==faturaNo)
        return;
    faturaNo = value;
    emit faturaNoDegisti(faturaNo);
}

QDataStream &operator<<(QDataStream &a, const TMAlisFaturasiPtr &b)
{
    a << b->getId() << b->getFaturaNo() << b->getUrunAlisTarihi();
    return a;
}

QDataStream &operator>>(QDataStream &a, TMAlisFaturasiPtr &b)
{
    IdTuru urunAlisFaturaId;
    Tarih urunAlisTarihi;
    Metin faturaNo;

    a >> urunAlisFaturaId >> urunAlisTarihi >> faturaNo;

    b = std::make_shared<TMAlisFaturasi>();

    b->setId(urunAlisFaturaId);
    b->setUrunAlisTarihi(urunAlisTarihi);
    b->setFaturaNo(faturaNo);

    return a;
}


