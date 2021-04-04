#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsRectItem>
#include "Score.h"


class Bullet: public QObject, public QGraphicsRectItem
{
    // use macro object that holds functions that tell aobut any change to the current object
    Q_OBJECT

public:
    Bullet(QGraphicsItem *parent=0);



  public slots:
    void move();



};

#endif // BULLET_H
