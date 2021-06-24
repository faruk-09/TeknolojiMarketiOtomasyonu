#ifndef TMMUSTERIBILGILERI_H
#define TMMUSTERIBILGILERI_H

#include <QObject>
#include<Veri/tanimlar.h>

class TMMusteriBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TMMusteriBilgileri(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin musteriAdSoyad READ getMusteriAdSoyad WRITE setMusteriAdSoyad NOTIFY musteriAdSoyadDegisti)
    Q_PROPERTY(Metin musteriTelefonNumarasi READ getMusteriTelefonNumarasi WRITE setMusteriTelefonNumarasi NOTIFY musteriTelefonNumarasiDegisti)
    Q_PROPERTY(Metin musteriMailAdresi READ getMusteriMailAdresi WRITE setMusteriMailAdresi NOTIFY musteriMailAdresiDegisti)
    Q_PROPERTY(Metin musteriAdresi READ getMusteriAdresi WRITE setMusteriAdresi NOTIFY musteriAdresiDegisti)

    IdTuru getId() const;
    Metin getMusteriAdSoyad() const;
    Metin getMusteriTelefonNumarasi() const;
    Metin getMusteriMailAdresi() const;
    Metin getMusteriAdresi() const;

signals:
    void idDegisti(const IdTuru &value);
    void musteriAdSoyadDegisti(const Metin &value);
    void musteriTelefonNumarasiDegisti(const Metin &value);
    void musteriMailAdresiDegisti(const Metin &value);
    void musteriAdresiDegisti(const Metin &value);

public slots:
    void setId(const IdTuru &value);
    void setMusteriAdSoyad(const Metin &value);
    void setMusteriTelefonNumarasi(const Metin &value);
    void setMusteriMailAdresi(const Metin &value);
    void setMusteriAdresi(const Metin &value);


private:
    IdTuru musteriId;
    Metin musteriAdSoyad;
    Metin musteriTelefonNumarasi;
    Metin musteriMailAdresi;
    Metin musteriAdresi;
};

QDataStream &operator<<(QDataStream &a, const TMMusteriBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMMusteriBilgileriPtr &b);

#endif // TMMUSTERIBILGILERI_H
