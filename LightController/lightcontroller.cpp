// lightcontroller.cpp

#include "lightcontroller.h"

LightController::LightController(QObject *parent) : QObject(parent)
{
    theLight = new local::MyLight("local.MyLight", "/light",
                                        QDBusConnection::sessionBus(), this);
}

void LightController::turnOn()
{
    theLight->turnOn();
}

void LightController::turnOff()
{
    theLight->turnOff();
}
