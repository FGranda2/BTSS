#include "genericSpaceObject.h"

GenericSpaceObject::GenericSpaceObject(QString objectName, QObject* parent)
    : QObject(parent)
    ,_objectName       (objectName)
{
    // Add connections if needed
}

GenericSpaceObject::~GenericSpaceObject()
{

}
