#include "tmmusteribilgileri.h"

TMMusteriBilgileri::TMMusteriBilgileri(QObject *parent) : QObject(parent)
{

}

IdTuru TMMusteriBilgileri::getId() const
{
    return musteriId;
}

void TMMusteriBilgileri::setId(const IdTuru &value)
{
    if(value==musteriId)
        return;
    musteriId = value;
    emit idDegisti(musteriId);
}

Metin TMMusteriBilgileri::getMusteriAdSoyad() const
{
    return musteriAdSoyad;
}

void TMMusteriBilgileri::setMusteriAdSoyad(const Metin &value)
{
    if(value==musteriAdSoyad)
        return;
    musteriAdSoyad = value;
    emit musteriAdSoyadDegisti(musteriAdSoyad);
}

Metin TMMusteriBilgileri::getMusteriTelefonNumarasi() const
{

    return musteriTelefonNumarasi;
}

void TMMusteriBilgileri::setMusteriTelefonNumarasi(const Metin &value)
{
    if(value==musteriTelefonNumarasi)
        return;
    musteriTelefonNumarasi = value;
    emit musteriTelefonNumarasiDegisti(musteriTelefonNumarasi);
}

Metin TMMusteriBilgileri::getMusteriMailAdresi() const
{
    return musteriMailAdresi;
}

void TMMusteriBilgileri::setMusteriMailAdresi(const Metin &value)
{
    if(value==musteriMailAdresi)
        return;
    musteriMailAdresi = value;
    emit musteriMailAdresiDegisti(musteriMailAdresi);
}

Metin TMMusteriBilgileri::getMusteriAdresi() const
{
    return musteriAdresi;
}

void TMMusteriBilgileri::setMusteriAdresi(const Metin &value)
{
    if(value==musteriAdresi)
        return;
    musteriAdresi = value;
    emit musteriAdresiDegisti(musteriAdresi);
}

QDataStream &operator<<(QDataStream &a, const TMMusteriBilgileriPtr &b)
{
    a<< b->getId() << b->getMusteriAdSoyad() << b->getMusteriTelefonNumarasi() << b->getMusteriMailAdresi() << b->getMusteriAdresi();
    return a;
}

QDataStream &operator>>(QDataStream &a, TMMusteriBilgileriPtr &b)
{
    IdTuru musteriId;
    Metin musteriAdSoyad;
    Metin musteriTelefonNumarasi;
    Metin musteriMailAdresi;
    Metin musteriAdresi;

    a>> musteriId >> musteriAdSoyad >> musteriTelefonNumarasi>> musteriMailAdresi>> musteriAdresi;

    b = std::make_shared<TMMusteriBilgileri>();

    b->setId(musteriId);
    b->setMusteriAdSoyad(musteriAdSoyad);
    b->setMusteriTelefonNumarasi(musteriTelefonNumarasi);
    b->setMusteriMailAdresi(musteriMailAdresi);
    b->setMusteriAdresi(musteriAdresi);

    return a;
}

