#include"H.h"
#include"peremen.h"

class pacman{

int dx;//х направление головы
int dy;//у направление головы
public:
void dxdy();
void pacm();// красим координаты головы
void klav();//считываем клавишу,закрашиваем хвост,изменяем счет
void pole();//отрисовка игрового поля
};