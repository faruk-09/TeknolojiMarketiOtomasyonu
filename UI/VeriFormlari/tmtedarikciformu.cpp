#include "tmtedarikciformu.h"
#include "ui_tmtedarikciformu.h"
#include<UI/VeriFormlari/Widgetlar/tedarikciduzenleme.h>
#include<UI/ListeFormlari/tmtedarikcilistewidget.h>
#include<Veri/tmgenelveriyoneticisi.h>
#include<Veri/VeriSiniflari/tmtedarikci.h>

TMTedarikciFormu::TMTedarikciFormu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TMTedarikciFormu)
{
    ui->setupUi(this);



    TMTedarikciListeWidget*widget1=new TMTedarikciListeWidget(this);
    ui->tabTedarikciIslemleri->addTab(widget1,tr("Tanımlı Tedarikçiler"));

}

TMTedarikciFormu::~TMTedarikciFormu()
{
    delete ui;
}


void TMTedarikciFormu::on_tabTedarikciIslemleri_tabCloseRequested(int index)
{
    if (index<2){
        return;
    }
}

void TMTedarikciFormu::on_btnYeniTedarikci_clicked()
{
    TedarikciDuzenleme*widget=new TedarikciDuzenleme(this);
    auto index=ui->tabTedarikciIslemleri->addTab(widget,tr("Yeni Tedarikçi Ekle"));
    auto veri=TMGenelVeriYoneticisi::mfa().getTedarikciBilgileri().yeni();

    widget->setVeri(veri);
    ui->tabTedarikciIslemleri->setCurrentIndex(index);

    connect(widget,&TedarikciDuzenleme::iptalKapat,[this,widget](){
        for (auto i=0;i<this->ui->tabTedarikciIslemleri->count();i++){
        if(this->ui->tabTedarikciIslemleri->widget(i)== widget){
            this->ui->tabTedarikciIslemleri->removeTab(i);
            return;
        }
        }

    });

    connect(widget,&TedarikciDuzenleme::kaydetKapat,[this,widget](){

        TMGenelVeriYoneticisi::mfa().getTedarikciBilgileri().ekle(widget->getVeri());

        for (auto i=0;i<this->ui->tabTedarikciIslemleri->count();i++){
        if(this->ui->tabTedarikciIslemleri->widget(i)== widget){
            this->ui->tabTedarikciIslemleri->removeTab(i);
            return;
}

    }

});
}
