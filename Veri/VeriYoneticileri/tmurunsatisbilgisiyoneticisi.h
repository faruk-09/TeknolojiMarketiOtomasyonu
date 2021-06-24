#ifndef TMURUNSATISBILGISIYONETICISI_H
#define TMURUNSATISBILGISIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>

class TMUrunSatisBilgisiYoneticisi : public QObject , public TemelVeriYoneticisi<TMUrunSatisBilgileri , TMUrunSatisBilgileriPtr>
{
    Q_OBJECT
public:
    explicit TMUrunSatisBilgisiYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMURUNSATISBILGISIYONETICISI_H
