#include"H.h"
#include"Menu.h"

int sch3;
int px2;//��������� �������� 2
int py2;//��������� �������� 2
int px3;//��������� �������� 3
int py3;//��������� �������� 3
int px4;//��������� �������� 4
int py4;//��������� �������� 4
int dx1;//��������� �������
int dy1;//��������� �������
int sch;//���-�� �������
int sch2;//��������� ����
int slo;//���������
int popo;//���������������
char a[110][101];//������ ����
int los;//�������� �������
int pklav;//��� �������
int interval=2;//������� 
int timerpr;//������� ���������
int timerpr2;//������� ���������
int timerpr3;//������� ���������
int timerpr4;//������� ���������
char r=219;//��� ����
char sharik=250;//��� ������
char bsharik=42;//��� ������������
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);//�����

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
