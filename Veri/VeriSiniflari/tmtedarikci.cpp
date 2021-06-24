#include "tmtedarikci.h"

TMTedarikci::TMTedarikci(QObject *parent) : QObject(parent)
{

}

IdTuru TMTedarikci::getId() const
{
    return tedarikciId;
}

void TMTedarikci::setId(const IdTuru &value)
{
    if(value==tedarikciId)
        return;
    tedarikciId = value;
    emit idDegisti(tedarikciId);
}

Metin TMTedarikci::getTedarikciAdi() const
{
    return tedarikciAdi;
}

void TMTedarikci::setTedarikciAdi(const Metin &value)
{
    if(value==tedarikciAdi)
        return;
    tedarikciAdi = value;
    emit tedarikciAdiDegisti(tedarikciAdi);
}

Metin TMTedarikci::getTedarikciAdresi() const
{
    return tedarikciAdresi;
}

void TMTedarikci::setTedarikciAdresi(const Metin &value)
{
    if(value==tedarikciAdresi)
        return;
    tedarikciAdresi = value;
    emit tedarikciAdresiDegisti(tedarikciAdresi);
}

Metin TMTedarikci::getTedarikciTelefon() const
{
    return tedarikciTelefon;
}

void TMTedarikci::setTedarikciTelefon(const Metin &value)
{
    if(value==tedarikciTelefon)
        return;
    tedarikciTelefon = value;
    emit tedarikciTelefonDegisti(tedarikciTelefon);
}

Metin TMTedarikci::getTedarikciYetkiliKisi() const
{
    return tedarikciYetkiliKisi;
}

void TMTedarikci::setTedarikciYetkiliKisi(const Metin &value)
{
    if(value==tedarikciYetkiliKisi)
        return;
    tedarikciYetkiliKisi = value;
    emit tedarikciYetkiliKisiDegisti(tedarikciYetkiliKisi);
}

Metin TMTedarikci::getTedarikciMailAdresi() const
{
    return tedarikciMailAdresi;
}

void TMTedarikci::setTedarikciMailAdresi(const Metin &value)
{
    if(value==tedarikciMailAdresi)
        return;
    tedarikciMailAdresi = value;
    emit tedarikciMailAdresiDegisti(tedarikciMailAdresi);
}

QDataStream &operator<<(QDataStream &a, const TMTedarikciPtr &b)
{
    a << b->getId() << b->getTedarikciAdi()<< b->getTedarikciAdresi() << b->getTedarikciTelefon() << b->getTedarikciYetkiliKisi()<< b->getTedarikciMailAdresi();
    return a;
}
QDataStream &operator>>(QDataStream &a, TMTedarikciPtr &b)
{
    IdTuru tedarikciId;
    Metin tedarikciAdi;
    Metin tedarikciAdresi;
    Metin tedarikciTelefon;
    Metin tedarikciYetkiliKisi;
    Metin tedarikciMailAdresi;

    a >> tedarikciId >> tedarikciAdi >> tedarikciAdresi >> tedarikciTelefon>> tedarikciYetkiliKisi>> tedarikciMailAdresi;

    b = std::make_shared<TMTedarikci>();

    b->setId(tedarikciId);
    b->setTedarikciAdi(tedarikciAdi);
    b->setTedarikciAdresi(tedarikciAdresi);
    b->setTedarikciTelefon(tedarikciTelefon);
    b->setTedarikciYetkiliKisi(tedarikciYetkiliKisi);
    b->setTedarikciMailAdresi(tedarikciMailAdresi);

    return a;
}
