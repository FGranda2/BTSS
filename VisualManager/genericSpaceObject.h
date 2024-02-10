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


    // Property getters
    QString format(void)        { return _format; }
    int     command(void)       { return _command; }
    bool    obj_data(void)      { return _obj_data; }
    bool    make_ephem(void)    { return _make_ephem; }
    QString ephem_type(void)    { return _ephem_type; }
    QString email_addr(void)    { return _email_addr; }

    

signals:
    void formatChanged      (void);
    void commandChanged     (void);
    void obj_dataChanged    (void);
    void make_ephemChanged  (void);
    void ephem_typeChanged  (void);
    void email_addrChanged  (void);

private slots:
    

private:
    QString     _objectName;
    QString     _format;
    int         _command;
    bool        _obj_data;
    bool        _make_ephem;
    QString     _ephem_type;
    QString     _email_addr;

};

#endif
