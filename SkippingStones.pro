TARGET = harbour-skippingstones

CONFIG += sailfishapp

SOURCES += \
    main.cpp \
    btconnector.cpp \
    btmessage.cpp \
    filesystemhelper.cpp \
    settingsadapter.cpp \
    dbusofonoadapter.cpp

OTHER_FILES += \
    rpm/harbour-skippingstones.spec \
    harbour-skippingstones.desktop \
    qml/main.qml \
    qml/MainPage.qml \
    rpm/harbour-skippingstones.yaml \
    qml/Watch.qml \
    qml/PutBytes.qml

HEADERS += \
    btconnector.h \
    btmessage.h \
    filesystemhelper.h \
    settingsadapter.h \
    dbusofonoadapter.h

QT += bluetooth dbus
