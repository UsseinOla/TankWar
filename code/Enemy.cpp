#include "Enemy.h"
#include <QGraphicsPixmapItem>
#include <QTimer>
#include"Game.h"


 extern Game* game;
Enemy::Enemy()
{
    //set random position
    int randomNumber=rand()%700;

    setPos(randomNumber,0);

   // setRect(0,0,75,75);

    setPixmap(QPixmap(":/images/enemies.png"));

    QTimer *timer=new QTimer();

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);



}

void Enemy::move()
{
 setPos(x(),y()+5);
 //check if the created enemy passed the main player
 if(pos().y()>600)
 {
  //add the health counter after missing colliding
  game->health->decrease();
  scene()->removeItem(this);
  delete this;
    }



}
