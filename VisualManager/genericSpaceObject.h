#ifndef GenericSpaceObject_H
#define GenericSpaceObject_H

#include <QObject>
#include <QString>
#include <QtQml>
#include <QTextStream>
#include <QJsonObject>

class GenericSpaceObject : public QObject
{
    Q_OBJECT
    
public:
    GenericSpaceObject(QString objectName, QObject* parent = nullptr);

    ~GenericSpaceObject();

    // Ephemeris Common Parameters https://ssd-api.jpl.nasa.gov/doc/horizons.html
    Q_PROPERTY(QString              format              READ format             NOTIFY formatChanged)           // json, text
    Q_PROPERTY(int                  command             READ command            NOTIFY commandChanged)          // see horizons documentation
    Q_PROPERTY(bool                 obj_data            READ obj_data           NOTIFY obj_dataChanged)         // NO, YES
    Q_PROPERTY(bool                 make_ephem          READ make_ephem         NOTIFY make_ephemChanged)       // NO, YES
    Q_PROPERTY(QString              ephem_type          READ ephem_type         NOTIFY ephem_typeChanged)       // OBSERVER, VECTORS, ELEMENTS, SPK, APPROACH
    Q_PROPERTY(QString              email_addr          READ email_addr         NOTIFY email_addrChanged)       // in case we mess up XD

    


    

signals:
    

private slots:
    

private:
    QString     _objectName;
    
};

#endif
