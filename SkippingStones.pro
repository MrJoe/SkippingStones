TARGET = harbour-skippingstones

CONFIG += sailfishapp

SOURCES += \
    main.cpp \
    btconnector.cpp \
    btmessage.cpp \
    filesystemhelper.cpp

OTHER_FILES += \
    rpm/harbour-skippingstones.spec \
    harbour-skippingstones.desktop \
    qml/main.qml \
    qml/MainPage.qml \
    rpm/harbour-skippingstones.yaml \
    qml/Watch.qml

HEADERS += \
    btconnector.h \
    btmessage.h \
    filesystemhelper.h

QT += bluetooth
