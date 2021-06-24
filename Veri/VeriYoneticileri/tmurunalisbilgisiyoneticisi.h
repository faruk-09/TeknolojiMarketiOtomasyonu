#ifndef TMURUNALISBILGISIYONETICISI_H
#define TMURUNALISBILGISIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>

class TMUrunAlisBilgisiYoneticisi : public QObject  , public TemelVeriYoneticisi<TMUrunAlisBilgileri , TMUrunAlisBilgileriPtr>
{
    Q_OBJECT
public:
    explicit TMUrunAlisBilgisiYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMURUNALISBILGISIYONETICISI_H
