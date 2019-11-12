#include"H.h"
#include"peremen.h"

class prizrak{

int px;//направление призрака
int py;//направление призрака
public:
char buff;//буфер
int px1;//положение призрака
int py1;//положение призрака
int razbegper;
void sett(int ax,int ay,int nx,int ny);//положение по умолчанию
void pogon(int xx,int yy,int color);// погоня
void pogonysl();//условие при погоне
void razbegysl();//условие при разбеге
void razbeg(int rx,int ry);//разбег
void step(int rx,int ry, int cv);//следующий шаг, отрисовка

};

