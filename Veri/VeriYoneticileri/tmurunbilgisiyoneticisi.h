#ifndef TMURUNBILGISIYONETICISI_H
#define TMURUNBILGISIYONETICISI_H

#include <QObject>
#include<Veri/tanimlar.h>
#include<Veri/VeriYoneticileri/Temel_veri_yoneticisi.h>


class TMUrunBilgisiYoneticisi : public QObject , public TemelVeriYoneticisi<TMUrunBilgileri , TMUrunBilgileriPtr>
{
    Q_OBJECT
public:



    explicit TMUrunBilgisiYoneticisi(QObject *parent = nullptr);

    //4.ürünün kopyasını oluşturma

    Ptr kopyaOlustur(Ptr kaynak) const;

signals:

private:

};

#endif // TMURUNBILGISIYONETICISI_H
