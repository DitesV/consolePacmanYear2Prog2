#include"H.h"
#include"peremen.h"

class prizrak{

int px;//����������� ��������
int py;//����������� ��������
public:
char buff;//�����
int px1;//��������� ��������
int py1;//��������� ��������
int razbegper;
void sett(int ax,int ay,int nx,int ny);//��������� �� ���������
void pogon(int xx,int yy,int color);// ������
void pogonysl();//������� ��� ������
void razbegysl();//������� ��� �������
void razbeg(int rx,int ry);//������
void step(int rx,int ry, int cv);//��������� ���, ���������

};

