#ifndef TMURUNBILGILERI_H
#define TMURUNBILGILERI_H

#include <QObject>

#include<Veri/tanimlar.h>

class TMUrunBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TMUrunBilgileri(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin urunAdi READ getUrunAdi WRITE setUrunAdi NOTIFY urunAdiDegisti)
    Q_PROPERTY(UrunTuru urunTuru READ getUrunTuru WRITE setUrunTuru NOTIFY urunTuruDegisti)
    Q_PROPERTY(Metin urunDetayi READ getUrunDetayi WRITE setUrunDetayi NOTIFY urunDetayiDegisti)
    Q_PROPERTY(ReelSayi urunFiyati READ getUrunFiyati WRITE setUrunFiyati NOTIFY urunFiyatiDegisti)
    Q_PROPERTY(TamSayi stokAdeti READ getStokAdeti WRITE setStokAdeti NOTIFY stokAdetiDegisti)
    Q_PROPERTY(ReelSayi indirimOrani READ getIndirimOrani WRITE setIndirimOrani NOTIFY indirimOraniDegisti)

    IdTuru getId() const;
    Metin getUrunAdi() const;
    UrunTuru getUrunTuru() const;
    Metin getUrunDetayi() const;
    ReelSayi getUrunFiyati() const;
    TamSayi getStokAdeti() const;
    ReelSayi getIndirimOrani() const;

signals:
    void idDegisti(const IdTuru &value);
    void urunAdiDegisti(const Metin &value);
    void urunTuruDegisti(const UrunTuru &value);
    void urunDetayiDegisti(const Metin &value);
    void urunFiyatiDegisti(const ReelSayi &value);
    void stokAdetiDegisti(const TamSayi &value);
    void indirimOraniDegisti(const ReelSayi &value);

public slots:
    void setId(const IdTuru &value);
    void setUrunAdi(const Metin &value);
    void setUrunTuru(const UrunTuru &value);
    void setUrunDetayi(const Metin &value);
    void setUrunFiyati(const ReelSayi &value);
    void setStokAdeti(const TamSayi &value);
    void setIndirimOrani(const ReelSayi &value);

private:
    IdTuru urunId;
    Metin urunAdi;
    UrunTuru urunTuru;
    Metin urunDetayi;
    ReelSayi urunFiyati;
    TamSayi stokAdeti;
    ReelSayi indirimOrani;

};

QDataStream &yaz(QDataStream &a,TMUrunBilgileriPtr b);
QDataStream &operator<<(QDataStream &a, const TMUrunBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunBilgileriPtr &b);

#endif // TMURUNBILGILERI_H
