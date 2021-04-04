#include"Bullet.h"
#include<QTimer>
#include<QGraphicsRectItem>
#include <QGraphicsScene>
#include "Enemy.h"

#include <QList>

#include "Game.h"

extern Game * game;

Bullet::Bullet(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent)
{
   // setPixmap(QPixmap(":/images/bullet.png"));
   setRect(0,0,10,50);
QTimer *timer=new QTimer();

connect(timer,SIGNAL(timeout()),this,SLOT(move()) );

timer->start(50);


}


void Bullet::move()
{


    //get list of all the items currently colliding with this bullet
    QList<QGraphicsItem *> colliding_items=collidingItems();

    //if one of the colliding items is an Enemy, destroy both the bullet and the enemy

    for(int i=0,n=colliding_items.size();i<n;++i)
    {

        if(typeid(*(colliding_items[i]))==typeid(Enemy))
        {
            game->scoreObj->increase();

            //remove
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);

            //delete them from the heap to save memory
            delete colliding_items[i];
            delete this;

            //return all code below refers to a non existint forward
            return;

        }




    }





setPos(x(),y()-10); // relative to move function







if(pos().y()+rect().height() <0)
{
scene()->removeItem(this);
delete this;
}


}
