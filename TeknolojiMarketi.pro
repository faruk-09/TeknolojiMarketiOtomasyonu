QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    UI/ListeFormlari/tmtedarikcilistewidget.cpp \
    UI/ListeFormlari/tmurunlistesi.cpp \
    UI/VeriFormlari/Widgetlar/tedarikciduzenleme.cpp \
    UI/VeriFormlari/tmtedarikciformu.cpp \
    UI/VeriFormlari/tmyeniuruntanimlamaformu.cpp \
    Veri/VeriSiniflari/tmurunbilgileri.cpp \
    Veri/VeriSiniflari/tmalisfaturasi.cpp \
    Veri/VeriSiniflari/tmmusteribilgileri.cpp \
    Veri/VeriSiniflari/tmsatisfaturasi.cpp \
    Veri/VeriSiniflari/tmtedarikci.cpp \
    Veri/VeriSiniflari/tmurunalisbilgileri.cpp \
    Veri/VeriSiniflari/tmurunsatisbilgileri.cpp \
    Veri/VeriYoneticileri/tmalisfaturasiyoneticisi.cpp \
    Veri/VeriYoneticileri/tmmusteribilgileriyoneticisi.cpp \
    Veri/VeriYoneticileri/tmsatisfaturasiyoneticisi.cpp \
    Veri/VeriYoneticileri/tmtedarikciyoneticisi.cpp \
    Veri/VeriYoneticileri/tmurunalisbilgisiyoneticisi.cpp \
    Veri/VeriYoneticileri/tmurunbilgisiyoneticisi.cpp \
    Veri/VeriYoneticileri/tmurunsatisbilgisiyoneticisi.cpp \
    Veri/tmgenelveriyoneticisi.cpp \
    main.cpp \
    tmanapencere.cpp

HEADERS += \
    UI/ListeFormlari/tmtedarikcilistewidget.h \
    UI/ListeFormlari/tmurunlistesi.h \
    UI/VeriFormlari/Widgetlar/tedarikciduzenleme.h \
    UI/VeriFormlari/tmtedarikciformu.h \
    UI/VeriFormlari/tmyeniuruntanimlamaformu.h \
    Veri/VeriSiniflari/tmurunbilgileri.h \
    Veri/VeriSiniflari/tmalisfaturasi.h \
    Veri/VeriSiniflari/tmmusteribilgileri.h \
    Veri/VeriSiniflari/tmsatisfaturasi.h \
    Veri/VeriSiniflari/tmtedarikci.h \
    Veri/VeriSiniflari/tmurunalisbilgileri.h \
    Veri/VeriSiniflari/tmurunsatisbilgileri.h \
    Veri/VeriYoneticileri/temel_veri_yoneticisi.h \
    Veri/VeriYoneticileri/tmalisfaturasiyoneticisi.h \
    Veri/VeriYoneticileri/tmmusteribilgileriyoneticisi.h \
    Veri/VeriYoneticileri/tmsatisfaturasiyoneticisi.h \
    Veri/VeriYoneticileri/tmtedarikciyoneticisi.h \
    Veri/VeriYoneticileri/tmurunalisbilgisiyoneticisi.h \
    Veri/VeriYoneticileri/tmurunbilgisiyoneticisi.h \
    Veri/VeriYoneticileri/tmurunsatisbilgisiyoneticisi.h \
    Veri/tanimlar.h \
    Veri/tmgenelveriyoneticisi.h \
    tmanapencere.h

FORMS += \
    UI/ListeFormlari/tmtedarikcilistewidget.ui \
    UI/ListeFormlari/tmurunlistesi.ui \
    UI/VeriFormlari/Widgetlar/tedarikciduzenleme.ui \
    UI/VeriFormlari/tmtedarikciformu.ui \
    UI/VeriFormlari/tmyeniuruntanimlamaformu.ui \
    tmanapencere.ui

TRANSLATIONS += \
    TeknolojiMarketi_tr_TR.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
