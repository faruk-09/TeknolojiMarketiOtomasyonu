#ifndef TMANAPENCERE_H
#define TMANAPENCERE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TMAnaPencere; }
QT_END_NAMESPACE

class TMAnaPencere : public QMainWindow
{
    Q_OBJECT

public:
    TMAnaPencere(QWidget *parent = nullptr);
    ~TMAnaPencere();

private slots:
    void on_actionTedarikciler_triggered();

    void on_actionMevcuturunler_triggered();

    void on_actionYeni_Tedarikci_Ekleme_triggered();

    void on_actionYeni_Tedarikci_Tanimla_triggered();

    void on_actionYeni_Tedarikci_Tanimlar_triggered();

    void on_actionYeniurun_Tanimlama_triggered();

private:
    Ui::TMAnaPencere *ui;
};
#endif // TMANAPENCERE_H
