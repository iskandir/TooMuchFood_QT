#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#include <QGraphicsItem>
#include <QKeyEvent>
#include <john.h>

class Movements : public QGraphicsItem
{
    Q_OBJECT

public:
   Movements(QGraphicsItem *parent = 0);
   void keyPressEvent(QKeyEvent *event);
   void makeBoard();
   void moveJohn();

public slots:
   void move();
   void makeFood();
   void makeFood2();

private:
   John *johnsBody;
   QString direction;
   QTimer *t;
   QTimer *moveTillBurgerDigested;
   QTimer *moveTillFriesDigested;
   QGraphicsTextItem *text;


};

#endif // MOVEMENTS_H
