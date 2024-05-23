#ifndef PRODUCER_H
#define PRODUCER_H

#include <QObject>

class Producer : public QObject
{
    Q_OBJECT
public:
    explicit Producer(QObject *parent = nullptr);

signals:
};

#endif // PRODUCER_H
