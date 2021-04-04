
#include "Health.h"
#include<QGraphicsTextItem>

Health::Health(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
health=0;

setPlainText(QString("Health: ")+QString::number(health));

setDefaultTextColor(Qt::blue);

}





void Health::decrease()
{
health--;
setPlainText(QString("Health: ")+QString::number(health));

setDefaultTextColor(Qt::blue);

}

int Health::getHealth()
{
return health;
}

