#ifndef BLOCK_H
#define BLOCK_H

#include <QObject>

class block : public QObject
{
    Q_OBJECT
public:
    explicit block(QObject *parent = 0);

private:
    QRect block;

signals:

public slots:
};

#endif // BLOCK_H
