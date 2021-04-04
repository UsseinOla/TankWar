#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QObject>

class Score: public QGraphicsTextItem
{


public:
 Score(QGraphicsItem * parent=0);
  int getScore();
   void increase();

private:
    int score;

};



#endif // SCORE_H
