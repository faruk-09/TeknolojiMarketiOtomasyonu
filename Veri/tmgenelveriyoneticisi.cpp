#include "tmgenelveriyoneticisi.h"

TMGenelVeriYoneticisi::TMGenelVeriYoneticisi(QObject *parent) : QObject(parent)
{

}

TMGenelVeriYoneticisi &TMGenelVeriYoneticisi::mfa()
{
    static TMGenelVeriYoneticisi nesne;
    return nesne;
}

TMAlisFaturasiYoneticisi &TMGenelVeriYoneticisi::getAlisFaturalari()
{
    return alisFaturalari;
}

TMMusteriBilgileriYoneticisi &TMGenelVeriYoneticisi::getMusteriBilgileri()
{
    return musteriBilgileri;
}

TMSatisFaturasiYoneticisi &TMGenelVeriYoneticisi::getSatisFaturalari()
{
    return satisFaturalari;
}

TMTedarikciYoneticisi &TMGenelVeriYoneticisi::getTedarikciBilgileri()
{
    return tedarikciBilgileri;
}

TMUrunAlisBilgisiYoneticisi &TMGenelVeriYoneticisi::getAlisBilgileri()
{
    return alisBilgileri;
}

TMUrunBilgisiYoneticisi &TMGenelVeriYoneticisi::getUrunBilgileri()
{
    return urunBilgileri;
}

TMUrunSatisBilgisiYoneticisi &TMGenelVeriYoneticisi::getSatisBilgileri()
{
    return satisBilgileri;
}

QDataStream &operator<<(QDataStream &a, TMGenelVeriYoneticisi &b)
{
    a << b.alisFaturalari << b.musteriBilgileri << b.satisFaturalari << b.tedarikciBilgileri << b.alisBilgileri << b.urunBilgileri << b.satisBilgileri;

    return a;
}

QDataStream &operator>>(QDataStream &a, TMGenelVeriYoneticisi &b)
{
    a >> b.alisFaturalari >> b.musteriBilgileri >> b.satisFaturalari >> b.tedarikciBilgileri >> b.alisBilgileri >> b.urunBilgileri >> b.satisBilgileri;

    return a;
}

