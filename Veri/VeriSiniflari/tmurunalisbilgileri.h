#ifndef TMURUNALISBILGILERI_H
#define TMURUNALISBILGILERI_H

#include <QObject>
#include<Veri/tanimlar.h>


class TMUrunAlisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TMUrunAlisBilgileri(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(TamSayi urunAlisMiktari READ getUrunAlisMiktari WRITE setUrunAlisMiktari NOTIFY urunAlisMiktariDegisti)
    Q_PROPERTY(ParaBirimi urunAlisFiyati READ getUrunAlisFiyati WRITE setUrunAlisFiyati NOTIFY urunAlisFiyatiDegisti)

    IdTuru getId() const;
    TamSayi getUrunAlisMiktari() const;
    ParaBirimi getUrunAlisFiyati() const;
    ParaBirimi getToplam() const;


signals:

    void idDegisti(const IdTuru &value);
    void urunAlisMiktariDegisti(const TamSayi &value);
    void urunAlisFiyatiDegisti(const ParaBirimi &value);

public slots:
    void setId(const IdTuru &value);
    void setUrunAlisMiktari(const TamSayi &value);
    void setUrunAlisFiyati(const ParaBirimi &value);

private:
    IdTuru urunAlisId;
    TamSayi urunAlisMiktari;
    ParaBirimi urunAlisFiyati;

};

QDataStream &operator<<(QDataStream &a, const TMUrunAlisBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunAlisBilgileriPtr &b);

#endif // TMURUNALISBILGILERI_H
