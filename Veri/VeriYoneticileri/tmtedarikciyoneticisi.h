#ifndef TMTEDARIKCIYONETICISI_H
#define TMTEDARIKCIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>

class TMTedarikciYoneticisi : public QObject ,public TemelVeriYoneticisi<TMTedarikci , TMTedarikciPtr>
{
    Q_OBJECT
public:
    explicit TMTedarikciYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

};

#endif // TMTEDARIKCIYONETICISI_H
