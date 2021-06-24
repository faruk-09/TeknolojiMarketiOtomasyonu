#ifndef TMURUNSATISBILGILERI_H
#define TMURUNSATISBILGILERI_H

#include <QObject>
#include<Veri/tanimlar.h>

class TMUrunSatisBilgileri : public QObject
{
    Q_OBJECT
public:
    explicit TMUrunSatisBilgileri(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(TamSayi urunSatisMiktari READ getUrunSatisMiktari WRITE setUrunSatisMiktari NOTIFY urunSatisMiktariDegisti)
    Q_PROPERTY(ParaBirimi urunSatisFiyati READ getUrunSatisFiyati WRITE setUrunSatisFiyati NOTIFY urunSatisFiyatiDegisti)

    IdTuru getId() const;
    TamSayi getUrunSatisMiktari() const;
    ParaBirimi getUrunSatisFiyati() const;
    ParaBirimi getToplam() const;



signals:

    void idDegisti(const IdTuru &value);
    void urunSatisMiktariDegisti(const TamSayi &value);
    void urunSatisFiyatiDegisti(const ParaBirimi &value);

public slots:
    void setId(const IdTuru &value);
    void setUrunSatisMiktari(const TamSayi &value);
    void setUrunSatisFiyati(const ParaBirimi &value);


private:
    IdTuru urunSatisId;
    TamSayi urunSatisMiktari;
    ParaBirimi urunSatisFiyati;


};

QDataStream &operator<<(QDataStream &a, const TMUrunSatisBilgileriPtr &b);
QDataStream &operator>>(QDataStream &a, TMUrunSatisBilgileriPtr &b);

#endif // TMURUNSATISBILGILERI_H
