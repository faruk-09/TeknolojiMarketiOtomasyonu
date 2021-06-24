#ifndef TMGENELVERIYONETICISI_H
#define TMGENELVERIYONETICISI_H

#include <QObject>

#include<Veri/VeriYoneticileri/tmalisfaturasiyoneticisi.h>
#include<Veri/VeriYoneticileri/tmmusteribilgileriyoneticisi.h>
#include<Veri/VeriYoneticileri/tmsatisfaturasiyoneticisi.h>
#include<Veri/VeriYoneticileri/tmtedarikciyoneticisi.h>
#include<Veri/VeriYoneticileri/tmurunalisbilgisiyoneticisi.h>
#include<Veri/VeriYoneticileri/tmurunbilgisiyoneticisi.h>
#include<Veri/VeriYoneticileri/tmurunsatisbilgisiyoneticisi.h>

class TMGenelVeriYoneticisi : public QObject
{
    Q_OBJECT
private:
    explicit TMGenelVeriYoneticisi(QObject *parent = nullptr);

public:

    static TMGenelVeriYoneticisi &mfa();

    TMAlisFaturasiYoneticisi &getAlisFaturalari();
    TMMusteriBilgileriYoneticisi &getMusteriBilgileri();
    TMSatisFaturasiYoneticisi &getSatisFaturalari();
    TMTedarikciYoneticisi &getTedarikciBilgileri();
    TMUrunAlisBilgisiYoneticisi &getAlisBilgileri();
    TMUrunBilgisiYoneticisi &getUrunBilgileri();
    TMUrunSatisBilgisiYoneticisi &getSatisBilgileri();

signals:

private:
    TMAlisFaturasiYoneticisi alisFaturalari;
    TMMusteriBilgileriYoneticisi musteriBilgileri;
    TMSatisFaturasiYoneticisi satisFaturalari;
    TMTedarikciYoneticisi tedarikciBilgileri;
    TMUrunAlisBilgisiYoneticisi alisBilgileri;
    TMUrunBilgisiYoneticisi urunBilgileri;
    TMUrunSatisBilgisiYoneticisi satisBilgileri;

    friend QDataStream &operator<<(QDataStream &a, TMGenelVeriYoneticisi &b);
    friend QDataStream &operator>>(QDataStream &a, TMGenelVeriYoneticisi &b);
};

QDataStream &operator<<(QDataStream &a, TMGenelVeriYoneticisi &b);
QDataStream &operator>>(QDataStream &a, TMGenelVeriYoneticisi &b);

#endif // TMGENELVERIYONETICISI_H
