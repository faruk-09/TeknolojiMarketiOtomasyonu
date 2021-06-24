#ifndef TMTEDARIKCI_H
#define TMTEDARIKCI_H

#include <QObject>
#include<Veri/tanimlar.h>

class TMTedarikci : public QObject
{
    Q_OBJECT
public:
    explicit TMTedarikci(QObject *parent = nullptr);

    Q_PROPERTY(IdTuru id READ getId WRITE setId NOTIFY idDegisti)
    Q_PROPERTY(Metin tedarikciAdi READ getTedarikciAdi WRITE setTedarikciAdi NOTIFY tedarikciAdiDegisti)
    Q_PROPERTY(Metin tedarikciAdresi READ getTedarikciAdresi WRITE setTedarikciAdresi NOTIFY tedarikciAdresiDegisti)
    Q_PROPERTY(Metin tedarikciTelefon READ getTedarikciTelefon WRITE setTedarikciTelefon NOTIFY tedarikciTelefonDegisti)
    Q_PROPERTY(Metin tedarikciYetkiliKisi READ getTedarikciYetkiliKisi WRITE setTedarikciYetkiliKisi NOTIFY tedarikciYetkiliKisiDegisti)
    Q_PROPERTY(Metin tedarikciMailAdresi READ getTedarikciMailAdresi WRITE setTedarikciMailAdresi NOTIFY tedarikciMailAdresiDegisti)

    IdTuru getId() const;
    Metin getTedarikciAdi() const;
    Metin getTedarikciAdresi() const;
    Metin getTedarikciTelefon() const;
    Metin getTedarikciYetkiliKisi() const;
    Metin getTedarikciMailAdresi() const;

signals:

    void idDegisti(const IdTuru &value);
    void tedarikciAdiDegisti(const Metin &value);
    void tedarikciAdresiDegisti(const Metin &value);
    void tedarikciTelefonDegisti(const Metin &value);
    void tedarikciYetkiliKisiDegisti(const Metin &value);
    void tedarikciMailAdresiDegisti(const Metin &value);

public slots:
    void setId(const IdTuru &value);
    void setTedarikciAdi(const Metin &value);
    void setTedarikciAdresi(const Metin &value);
    void setTedarikciTelefon(const Metin &value);
    void setTedarikciYetkiliKisi(const Metin &value);
    void setTedarikciMailAdresi(const Metin &value);


private:
    IdTuru tedarikciId;
    Metin tedarikciAdi;
    Metin tedarikciAdresi;
    Metin tedarikciTelefon;
    Metin tedarikciYetkiliKisi;
    Metin tedarikciMailAdresi;

};

QDataStream &operator<<(QDataStream &a, const TMTedarikciPtr &b);
QDataStream &operator>>(QDataStream &a, TMTedarikciPtr &b);

#endif // TMTEDARIKCI_H
