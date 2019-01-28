TEMPLATE = app
TARGET = BorneInterface
QT += core \
    gui
HEADERS += interfacesupprimer.h \
    interfacebornestationnement.h \
    interfacebornefontaine.h \
    borneinterface.h
SOURCES += interfacesupprimer.cpp \
    interfacebornestationnement.cpp \
    interfacebornefontaine.cpp \
    main.cpp \
    borneinterface.cpp
FORMS += interfacesupprimer.ui \
    interfacebornestationnement.ui \
    interfacebornefontaine.ui \
    borneinterface.ui
RESOURCES += 
LIBS += "../source/Debug/libsource.a"
INCLUDEPATH += "../source/."