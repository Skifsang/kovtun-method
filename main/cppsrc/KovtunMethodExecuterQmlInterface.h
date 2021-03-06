#ifndef KOVTUNMETHODEXECUTERQMLINTERFACE_H
#define KOVTUNMETHODEXECUTERQMLINTERFACE_H

#include <QObject>
#include "KovtunMethodExecuter.h"
#include "KovtunMethodPainter.h"

class KovtunMethodExecuterQmlInterface : public QObject
{
    Q_OBJECT
public:
    explicit KovtunMethodExecuterQmlInterface(
            KovtunMethodExecuter & kovtunMethodExecuter,
            QObject * parent = 0);

    void setKovtunMethodPainter(KovtunMethodPainter * const kovtunMethodPainter);

    Q_INVOKABLE void performNextStep();

private:
    KovtunMethodExecuter & kovtunMethodExecuter;
    KovtunMethodPainter * kovtunMethodPainter;
};

#endif // KOVTUNMETHODEXECUTERQMLINTERFACE_H
