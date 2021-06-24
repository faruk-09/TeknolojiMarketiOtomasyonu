#ifndef TMALISFATURASIYONETICISI_H
#define TMALISFATURASIYONETICISI_H

#include <QObject>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>
#include<Veri/tanimlar.h>

class TMAlisFaturasiYoneticisi : public QObject , public TemelVeriYoneticisi<TMAlisFaturasi,TMAlisFaturasiPtr>
{
    Q_OBJECT
public:
    explicit TMAlisFaturasiYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMALISFATURASIYONETICISI_H
