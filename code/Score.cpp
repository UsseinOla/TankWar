
#include "Score.h"
#include <QGraphicsTextItem>
#include <QFont>
#include <QDebug>




Score::Score(QGraphicsItem *parent):QGraphicsTextItem(parent)
{
    score=0;
//draw initial text

    setPlainText(QString("Score: ")+QString::number(score));

    setDefaultTextColor(Qt::green);



}

int Score::getScore()
{
    return score;
}

void Score::increase()
{
    qDebug()<<"IT works perfectly!!";
    score++;
   setPlainText(QString("Score: ")+QString::number(score));


}
