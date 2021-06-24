#ifndef TANIMLAR_H
#define TANIMLAR_H

#include<QtCore>
#include<QString>
#include<QDate>
#include<QTime>
#include<QDateTime>
#include<QByteArray>

typedef  quint64 IdTuru;
typedef qint32 TamSayi ;

typedef double ReelSayi;

typedef int StokAdeti;

typedef float ParaBirimi ;

typedef QString Metin ;

typedef QDate Tarih;
typedef QTime Saat;
typedef QDateTime TarihSaat;

typedef  enum {
    ITAnakart = 1,
    ITIslemci = 2,
    ITRam = 4,
    ITHardDisk = 8,
    ITKasa = 16,
    ITEkranKarti = 32,
    ITGuckaynagi = 64,
    ITMonitor = 128,
    ITKlavye = 256,
    ITFare = 512,


}UrunTuru ;

typedef QByteArray Resim ;
//Pointer Tanımları

class TMAlisFaturasi;
class TMMusteriBilgileri;
class TMSatisFaturasi;
class TMTedarikci;
class TMUrunAlisBilgileri;
class TMUrunBilgileri;
class TMUrunSatisBilgileri;

#include<memory>

typedef std::shared_ptr<TMAlisFaturasi> TMAlisFaturasiPtr ;
typedef std::shared_ptr<TMMusteriBilgileri> TMMusteriBilgileriPtr ;
typedef std::shared_ptr<TMSatisFaturasi> TMSatisFaturasiPtr ;
typedef std::shared_ptr<TMTedarikci> TMTedarikciPtr ;
typedef std::shared_ptr<TMUrunAlisBilgileri> TMUrunAlisBilgileriPtr ;
typedef std::shared_ptr<TMUrunBilgileri> TMUrunBilgileriPtr ;
typedef std::shared_ptr<TMUrunSatisBilgileri> TMUrunSatisBilgileriPtr ;

QDataStream &operator<<(QDataStream &a, const TMAlisFaturasiPtr &b);
QDataStream &operator>>(QDataStream &a, TMAlisFaturasiPtr &b);

QDataStream &operator<<(QDataStream &a, const TMMusteriBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMMusteriBilgileriPtr &b);

QDataStream &operator<<(QDataStream &a, const TMSatisFaturasiPtr &b);
QDataStream &operator>>(QDataStream &a, TMSatisFaturasiPtr &b);

QDataStream &operator<<(QDataStream &a, const TMTedarikciPtr &b);
QDataStream &operator>>(QDataStream &a, TMTedarikciPtr &b);

QDataStream &operator<<(QDataStream &a, const TMUrunAlisBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunAlisBilgileriPtr &b);

QDataStream &operator<<(QDataStream &a, const TMUrunBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunBilgileriPtr &b);

QDataStream &operator<<(QDataStream &a, const TMUrunSatisBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunSatisBilgileriPtr &b);

#endif // TANIMLAR_H
