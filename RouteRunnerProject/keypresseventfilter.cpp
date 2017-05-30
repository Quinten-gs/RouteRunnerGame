#include "keypresseventfilter.h"

#include <QKeyEvent>
#include <QDebug>
#include <iostream>

KeyPressEventFilter::KeyPressEventFilter(QObject *parent)
    : QObject(parent){}

bool KeyPressEventFilter::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() != QEvent::KeyPress)
        return QObject::eventFilter(obj, event);

    QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
    switch(keyEvent->key()) {
    case Qt::Key_Space: {
        qDebug() << "space";
        emit SIG_ButtonClicked("space");
        break;
    }
    case Qt::Key_Left: {
        qDebug() << "left";
        emit SIG_ButtonClicked("left");
        break;
    }
    case Qt::Key_Right: {
        qDebug() << "right";
        emit SIG_ButtonClicked("right");
        break;
    }
    case Qt::Key_Up: {
        qDebug() << "up";
        emit SIG_ButtonClicked("up");
        break;
    }
    case Qt::Key_H: {
        qDebug() << "h";
        emit SIG_ButtonClicked("h");
        break;
    }
    case Qt::Key_Q: {
        qDebug() << "q";
        emit SIG_ButtonClicked("q");
        break;
    }
    default: {
        qDebug() << "Unhandled"; break; }
    }
    return true;
}
