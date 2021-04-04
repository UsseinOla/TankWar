#include "Player.h"
#include <QDebug>
#include <QKeyEvent>
#include<QGraphicsRectItem>

#include<QGraphicsPixmapItem>
#include "Bullet.h"
#include <QGraphicsScene>
#include "Enemy.h"
Player::Player(QGraphicsItem *parent):QGraphicsPixmapItem(parent)
{
   //set graphic
    setPixmap(QPixmap(":/images/player.png"));
    setTransformOriginPoint(50,50);
    setRotation(180);
}

void Player::keyPressEvent(QKeyEvent *event)
{

if(event->key()==Qt::Key_Right)
{
if(pos().x()+100<800)
setPos(x()+10,y());
}



if(event->key()==Qt::Key_Left)
{
if(pos().x()>0)
setPos(x()-10,y());
}


  // qDebug() <<"It works :)";


if(event->key()==Qt::Key_Space)
{

 Bullet *bullet=new Bullet();
 bullet->setPos(x(),y());
 scene()->addItem(bullet);

}



}

void Player::spawn()
{
Enemy *enemy=new Enemy();

scene()->addItem(enemy);
}
