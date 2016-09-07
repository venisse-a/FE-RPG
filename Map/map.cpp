#include "map.h"
#include <iostream>
using namespace std;

Map::Map(){

}
// 206 16 141 142 143 357 359 273 271 7 166 167 168 272 246 315 117 10 2 251 568 317 1006 202
void Map::Show_Map(int tab[20][30], int size_l,int size_c, QGraphicsScene *scene){
    int   width = 0;
    int   heigth = 0;
    QGraphicsPixmapItem *item;
    QPixmap image;
    for (int i = 0; i < size_l; i++)
    {
      for (int j = 0; j < size_c; j++)
        {
          if (tab[i][j] == 206 | tab[i][j] == 207 | tab[i][j] == 251)
            {
              image.load(":/tiles/Tiles/colline.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);
              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 16)
            {
              image.load(":/tiles/Tiles/arbre1.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 7 | tab[i][j]==2)
            {
              image.load(":/tiles/Tiles/herbe.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 315)
            {
              image.load(":/tiles/Tiles/forteresse.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 81)
            {
              image.load(":/tiles/Tiles/maison.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 272)
            {
              image.load(":/tiles/Tiles/mur.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 246)
            {
              image.load(":/tiles/Tiles/sable1.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 1006)
            {
              image.load(":/tiles/Tiles/sable3.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 141)
            {
              image.load(":/tiles/Tiles/gmai1.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 142)
            {
              image.load(":/tiles/Tiles/gmai2.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 143)
            {
              image.load(":/tiles/Tiles/gmai3.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 166)
            {
              image.load(":/tiles/Tiles/gmai4.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 167)
            {
              image.load(":/tiles/Tiles/gmai5.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 168)
            {
              image.load(":/tiles/Tiles/gmai6.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 10)
            {
              image.load(":/tiles/Tiles/sable2.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }

          else if (tab[i][j] == 271)
            {
              image.load(":/tiles/Tiles/mur2.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 273)
            {
              image.load(":/tiles/Tiles/mur3.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 274)
            {
              image.load(":/tiles/Tiles/mur4.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 1)
            {
              image.load(":/tiles/Tiles/hutte.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 317)
            {
              image.load(":/tiles/Tiles/sable.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 202)
            {
              image.load(":/tiles/Tiles/montagne1.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 536)
            {
              image.load(":/tiles/Tiles/os.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 568)
            {
              image.load(":/tiles/Tiles/os2.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);

              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 357)
            {
              image.load(":/tiles/Tiles/eau2.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);
              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 359)
            {
              image.load(":/tiles/Tiles/eau.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);
              item->setPos(width, heigth);
              width += 32;
            }
          else if (tab[i][j] == 273)
            {
              image.load(":/tiles/Tiles/montagne.png", 0, Qt::AutoColor);
              item = scene->addPixmap(image);
              item->setPos(width, heigth);
              width += 32;
            }
          else
            width += 32;
        }
      heigth += 32;
      width = 0;
    }
}
