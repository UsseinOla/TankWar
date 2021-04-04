#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsItem>

class Health:public QGraphicsTextItem
{
public:
    Health(QGraphicsItem * parent=0);
    void decrease();
    int getHealth();

private:
    int health;


};


#endif // HEALTH_H
