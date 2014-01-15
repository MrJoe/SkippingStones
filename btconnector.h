/*
 *  Copyright 2012 Ruediger Gad
 *
 *  This file is part of QZeeControl.
 *
 *  QZeeControl is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  QZeeControl is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with QZeeControl.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BTCONNECTOR_H
#define BTCONNECTOR_H

#include <QObject>
#include <QBluetoothAddress>
#include <QBluetoothSocket>

QT_USE_NAMESPACE_BLUETOOTH

class BtConnector : public QObject
{
    Q_OBJECT

public:
    explicit BtConnector(QObject *parent = 0);
    ~BtConnector();

    Q_INVOKABLE void connect(QString address, int port);

public slots:
    void disconnect();

signals:
    void connected();
    void disconnected();
    void error(QBluetoothSocket::SocketError errorCode);

private slots:
    void readData();

private:
    QBluetoothSocket *socket;

};

#endif // BTCONNECTOR_H
