// lightcontroller.h

#ifndef LIGHTCONTROLLER_H
#define LIGHTCONTROLLER_H

#include <QObject>
#include "light_interface.h"

class LightController : public QObject
{
    Q_OBJECT
public:
    explicit LightController(QObject *parent = nullptr);

private:
    local::MyLight *theLight;

public slots:
    void turnOn();
    void turnOff();
};

#endif // LIGHTCONTROLLER_H
