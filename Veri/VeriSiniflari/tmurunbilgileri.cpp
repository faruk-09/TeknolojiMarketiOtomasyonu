#include "tmurunbilgileri.h"

TMUrunBilgileri::TMUrunBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TMUrunBilgileri::getId() const
{
    return urunId;
}

void TMUrunBilgileri::setId(const IdTuru &value)
{
    if(value==urunId)
        return;
    urunId = value;
    emit idDegisti(urunId);
}

Metin TMUrunBilgileri::getUrunAdi() const
{
    return urunAdi;
}

void TMUrunBilgileri::setUrunAdi(const Metin &value)
{
    if(value==urunAdi)
        return;
    urunAdi = value;
    emit urunAdiDegisti(urunAdi);
}

UrunTuru TMUrunBilgileri::getUrunTuru() const
{
    return urunTuru;
}

void TMUrunBilgileri::setUrunTuru(const UrunTuru &value)
{
    if(value==urunTuru)
        return;
    urunTuru = value;
    emit urunTuruDegisti(urunTuru);
}

Metin TMUrunBilgileri::getUrunDetayi() const
{
    return urunDetayi;
}

void TMUrunBilgileri::setUrunDetayi(const Metin &value)
{
    if(value==urunDetayi)
        return;
    urunDetayi = value;
    emit urunDetayiDegisti(urunDetayi);
}

ReelSayi TMUrunBilgileri::getUrunFiyati() const
{
    return urunFiyati;
}

void TMUrunBilgileri::setUrunFiyati(const ReelSayi &value)
{
    if(qFuzzyCompare( urunFiyati , value))
        return;
    urunFiyati = value;
    emit urunFiyatiDegisti(urunFiyati);
}

TamSayi TMUrunBilgileri::getStokAdeti() const
{
    return stokAdeti;
}

void TMUrunBilgileri::setStokAdeti(const TamSayi &value)
{
    if(value==stokAdeti)
        return;
    stokAdeti = value;
    emit stokAdetiDegisti(stokAdeti);
}

ReelSayi TMUrunBilgileri::getIndirimOrani() const
{
    return indirimOrani;
}

void TMUrunBilgileri::setIndirimOrani(const ReelSayi &value)
{
    if(qFuzzyCompare( indirimOrani , value ))
        return;
    indirimOrani = value;
    emit indirimOraniDegisti(indirimOrani);
}

QDataStream &yaz(QDataStream &a, TMUrunBilgileriPtr b)
{
    a<< b->getId() <<b->getUrunAdi() << b->getUrunDetayi() << b->getUrunFiyati() << b->getUrunTuru() << b->getIndirimOrani() << b->getStokAdeti();
    return a;
}

QDataStream &operator<<(QDataStream &a, const TMUrunBilgileriPtr &b)
{
    a<< b->getId() << b->getUrunAdi() << b->getUrunTuru() << b->getUrunDetayi() << b->getUrunFiyati() << b->getUrunFiyati() << b->getStokAdeti() << b->getIndirimOrani();
    return a;

 }
QDataStream &operator>>(QDataStream &a, TMUrunBilgileriPtr &b)
{
    IdTuru urunId;
    Metin urunAdi;
    UrunTuru urunTuru;
    Metin urunDetayi;
    ReelSayi urunFiyati;
    TamSayi stokAdeti;
    ReelSayi indirimOrani;

    a>> urunId >> urunAdi >> urunTuru >> urunDetayi>> urunFiyati>> stokAdeti >> indirimOrani;

    b = std::make_shared<TMUrunBilgileri>();

    b->setId(urunId);
    b->setUrunAdi(urunAdi);
    b->setUrunTuru(urunTuru);
    b->setUrunDetayi(urunDetayi);
    b->setUrunFiyati(urunFiyati);
    b->setStokAdeti(stokAdeti);
    b->setIndirimOrani(indirimOrani);

    return a;


}
