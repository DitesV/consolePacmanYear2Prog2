#include"yrov.h"
#include"peremen.h"

void yrvn::otris()
{
for (int x=1;x<yrx+1;x=x++)
for (int y=1;y<yry+1;y++)
if(a[x][y]==bsharik||a[x][y]==sharik)
{coord(x,y);
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|12));
cout<<a[x][y];
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|9));}
else
{
coord(x,y);
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|11));
cout<<a[x][y];
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|11));
}

}

void yrvn::yr1()
{
system("mode con cols=35 lines=19");


dx1=2;//��������� �������
dy1=2;//��������� �������

a[1][1]=r;a[2][1]=r;a[3][1]=r;a[4][1]=r;a[5][1]=r;a[6][1]=r;a[7][1]=r;a[8][1]=r;a[9][1]=0;a[10][1]=r;a[11][1]=r;a[12][1]=r;a[13][1]=r;a[14][1]=r;a[15][1]=0;a[16][1]=r;a[17][1]=r;a[18][1]=r;
a[1][2]=r;a[2][2]=00;a[3][2]=00;a[4][2]=00;a[5][2]=00;a[6][2]=00;a[7][2]=00;a[8][2]=00;a[9][2]=00;a[10][2]=00;a[11][2]=00;a[12][2]=r;a[13][2]=00;a[14][2]=00;a[15][2]=00;a[16][2]=00;a[17][2]=00;a[18][2]=r;
a[1][3]=r;a[2][3]=0;a[3][3]=r;a[4][3]=r;a[5][3]=0;a[6][3]=r;a[7][3]=r;a[8][3]=0;a[9][3]=r;a[10][3]=r;a[11][3]=0;a[12][3]=r;a[13][3]=0;a[14][3]=r;a[15][3]=0;a[16][3]=r;a[17][3]=0;a[18][3]=r;
a[1][4]=r;a[2][4]=0;a[3][4]=r;a[4][4]=0;a[5][4]=0;a[6][4]=r;a[7][4]=0;a[8][4]=0;a[9][4]=r;a[10][4]=0;a[11][4]=0;a[12][4]=r;a[13][4]=0;a[14][4]=r;a[15][4]=0;a[16][4]=r;a[17][4]=0;a[18][4]=r;
a[1][5]=r;a[2][5]=0;a[3][5]=r;a[4][5]=r;a[5][5]=bsharik;a[6][5]=r;a[7][5]=r;a[8][5]=0;a[9][5]=r;a[10][5]=r;a[11][5]=0;a[12][5]=r;a[13][5]=0;a[14][5]=r;a[15][5]=0;a[16][5]=r;a[17][5]=0;a[18][5]=r;
a[1][6]=r;a[2][6]=0;a[3][6]=r;a[4][6]=0;a[5][6]=0;a[6][6]=0;a[7][6]=r;a[8][6]=0;a[9][6]=0;a[10][6]=r;a[11][6]=0;a[12][6]=r;a[13][6]=0;a[14][6]=r;a[15][6]=0;a[16][6]=r;a[17][6]=0;a[18][6]=r;
a[1][7]=r;a[2][7]=0;a[3][7]=r;a[4][7]=r;a[5][7]=0;a[6][7]=r;a[7][7]=r;a[8][7]=0;a[9][7]=r;a[10][7]=r;a[11][7]=0;a[12][7]=r;a[13][7]=0;a[14][7]=r;a[15][7]=r;a[16][7]=r;a[17][7]=0;a[18][7]=r;
a[1][8]=r;a[2][8]=0;a[3][8]=0;a[4][8]=0;a[5][8]=0;a[6][8]=0;a[7][8]=0;a[8][8]=0;a[9][8]=0;a[10][8]=0;a[11][8]=0;a[12][8]=0;a[13][8]=0;a[14][8]=0;a[15][8]=0;a[16][8]=bsharik;a[17][8]=0;a[18][8]=r;
a[1][9]=r;a[2][9]=r;a[3][9]=r;a[4][9]=r;a[5][9]=0;a[6][9]=r;a[7][9]=r;a[8][9]=r;a[9][9]=r;a[10][9]=r;a[11][9]=r;a[12][9]=r;a[13][9]=r;a[14][9]=r;a[15][9]=0;a[16][9]=r;a[17][9]=r;a[18][9]=r;

a[1][10]=r;a[2][10]=0;a[3][10]=0;a[4][10]=0;a[5][10]=0;a[6][10]=0;a[7][10]=0;a[8][10]=0;a[9][10]=0;a[10][10]=0;a[11][10]=0;a[12][10]=0;a[13][10]=0;a[14][10]=0;a[15][10]=0;a[16][10]=0;a[17][10]=0;a[18][10]=r;
a[1][11]=r;a[2][11]=0;a[3][11]=r;a[4][11]=r;a[5][11]=0;a[6][11]=r;a[7][11]=r;a[8][11]=r;a[9][11]=r;a[10][11]=r;a[11][11]=0;a[12][11]=r;a[13][11]=r;a[14][11]=r;a[15][11]=r;a[16][11]=r;a[17][11]=0;a[18][11]=r;
a[1][12]=r;a[2][12]=0;a[3][12]=0;a[4][12]=r;a[5][12]=0;a[6][12]=0;a[7][12]=0;a[8][12]=r;a[9][12]=0;a[10][12]=0;a[11][12]=0;a[12][12]=r;a[13][12]=0;a[14][12]=r;a[15][12]=0;a[16][12]=r;a[17][12]=0;a[18][12]=r;
a[1][13]=r;a[2][13]=bsharik;a[3][13]=r;a[4][13]=r;a[5][13]=0;a[6][13]=r;a[7][13]=0;a[8][13]=r;a[9][13]=0;a[10][13]=r;a[11][13]=0;a[12][13]=r;a[13][13]=r;a[14][13]=r;a[15][13]=r;a[16][13]=r;a[17][13]=0;a[18][13]=r;
a[1][14]=r;a[2][14]=0;a[3][14]=0;a[4][14]=r;a[5][14]=0;a[6][14]=r;a[7][14]=0;a[8][14]=r;a[9][14]=0;a[10][14]=r;a[11][14]=0;a[12][14]=0;a[13][14]=0;a[14][14]=r;a[15][14]=0;a[16][14]=0;a[17][14]=0;a[18][14]=r;
a[1][15]=r;a[2][15]=0;a[3][15]=r;a[4][15]=r;a[5][15]=0;a[6][15]=r;a[7][15]=0;a[8][15]=r;a[9][15]=0;a[10][15]=r;a[11][15]=r;a[12][15]=r;a[13][15]=0;a[14][15]=r;a[15][15]=0;a[16][15]=r;a[17][15]=r;a[18][15]=r;
a[1][16]=r;a[2][16]=0;a[3][16]=0;a[4][16]=0;a[5][16]=0;a[6][16]=r;a[7][16]=0;a[8][16]=0;a[9][16]=0;a[10][16]=0;a[11][16]=0;a[12][16]=0;a[13][16]=0;a[14][16]=0;a[15][16]=0;a[16][16]=bsharik;a[17][16]=0;a[18][16]=r;
a[1][17]=r;a[2][17]=r;a[3][17]=r;a[4][17]=r;a[5][17]=r;a[6][17]=r;a[7][17]=r;a[8][17]=r;a[9][17]=r;a[10][17]=r;a[11][17]=r;a[12][17]=r;a[13][17]=r;a[14][17]=r;a[15][17]=r;a[16][17]=r;a[17][17]=r;a[18][17]=r;

yrx=18;//������ ����
yry=17;
a[dx1][dy1]='<';
a[15][6]='&';
a[15][5]='&';
a[15][4]='&';
a[15][3]='&';

otris();

for (int x=1;x<yrx+1;x=x++)
for (int y=1;y<yry+1;y++)
{
	if(a[x][y]==0)
{coord(x,y);
a[x][y]=sharik;
sch++;
coord(x,y);
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|12));
cout<<a[x][y];
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|9));
}
}


a[15][12]=0;
sch--;
coord(15,12);
cout<<a[15][12];

a[13][12]=0;
sch--;
coord(13,12);
cout<<a[13][12];

}//��������� ������ � ������.

void yrvn::kray()//��������� �������
{

SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|8));
for (int x=0;x<yrx+2;x++)
for (int y=0;y<yry+2;y=y+yry+1)
{
a[x][y]=r;
coord(x,y);
cout<<a[x][y];
}
for (int x=0;x<yrx+2;x=x+yrx+1)
for (int y=0;y<yry+2;y++)
{
a[x][y]=r;
coord(x,y);
cout<<a[x][y];
}
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|9));

}
