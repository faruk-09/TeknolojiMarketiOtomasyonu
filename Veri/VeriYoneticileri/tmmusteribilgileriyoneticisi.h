#ifndef TMMUSTERIBILGILERIYONETICISI_H
#define TMMUSTERIBILGILERIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>

class TMMusteriBilgileriYoneticisi : public QObject , public TemelVeriYoneticisi<TMMusteriBilgileri , TMMusteriBilgileriPtr>
{
    Q_OBJECT
public:
    explicit TMMusteriBilgileriYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMMUSTERIBILGILERIYONETICISI_H
