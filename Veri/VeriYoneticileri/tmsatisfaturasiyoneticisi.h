#ifndef TMSATISFATURASIYONETICISI_H
#define TMSATISFATURASIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>


class TMSatisFaturasiYoneticisi : public QObject ,public TemelVeriYoneticisi<TMSatisFaturasi , TMSatisFaturasiPtr>
{
    Q_OBJECT
public:
    explicit TMSatisFaturasiYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMSATISFATURASIYONETICISI_H
