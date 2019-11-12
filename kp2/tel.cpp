#include"H.h"
#include"Menu.h"

int sch3;
int px2;//положение призрака 2
int py2;//положение призрака 2
int px3;//положение призрака 3
int py3;//положение призрака 3
int px4;//положение призрака 4
int py4;//положение призрака 4
int dx1;//положение пакмэна
int dy1;//положение пакмэна
int sch;//кол-во шариков
int sch2;//набранный счет
int slo;//сложность
int popo;//счетчикдолларов
char a[110][101];//массив поля
int los;//поедание пакмэна
int pklav;//код клавиша
int interval=2;//счетчик 
int timerpr;//счетчик призраков
int timerpr2;//счетчик призраков
int timerpr3;//счетчик призраков
int timerpr4;//счетчик призраков
char r=219;//код стен
char sharik=250;//код шарика
char bsharik=42;//код энерджайзера
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//хэндл

int main()
{	
	system("mode con cols=30 lines=11");
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO conCurInf;
	GetConsoleCursorInfo(hStdOut, &conCurInf);
	conCurInf.bVisible = false;
	SetConsoleCursorInfo(hStdOut, &conCurInf);	

    menu mnu;
	mnu.men();

	return 0;
}
