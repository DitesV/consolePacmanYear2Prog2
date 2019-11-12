
#include"prizr.h"
#include"peremen.h"
#include<cmath>

void prizrak::sett(int ax,int ay,int nx,int ny)
{
px1=ax;
py1=ay;
buff=0;
px=nx;
py=ny;


}

void prizrak::pogonysl()
		{
			
				if((px1==dx1)&&(py1==dy1))
				los=1;
				
		}
void prizrak::razbegysl()
{
				if((px1==dx1)&&(py1==dy1))
				{
				if(buff=='$')
				{sch3=sch3+50;
				popo--;}
				if(buff==sharik)
				sch2++;
				razbegper=1;
				a[px1][py1]=0;
				buff=0;
				}
}


void prizrak::step(int rx,int ry, int cv)
{
	int y;
	int x;
	int psy=py;
	int psx=px;
    if(((a[px1-py][py1-px])==r&&(a[px1+py][py1+px])==r)&&(a[px1+px][py1+py])==r)
	{px=-px;
	py=-py;}//тупик
	
	if((a[px1+px][py1+py])=='&')
		{px=-px;
	py=-py;}


	{y=0;	
	for(int x=-1;x<3;x=x+2)
		if(x!=-psx)
	if(((a[px1][py1-1])!=r||(a[px1][py1+1])!=r))
	if((a[px1+x][py1+y]!=r)&&(a[px1+x][py1+y]!='&'))
		if((abs(rx-(px1+x)) < abs(rx-(px1))))
	 {px=x;
	py=y;
	}	
}//вправовлево

	{x=0;	
	for(int y=-1;y<3;y=y+2)	
		if(y!=-psy)
	if(((a[px1-1][py1])!=r||(a[px1+1][py1])!=r))
	if((a[px1+x][py1+y]!=r)&&(a[px1+x][py1+y]!='&'))
		if(abs(ry-(py1+y)) < abs(ry-(py1)))
	 {px=x;
	py=y;}
	}//внизвверх
	
	
if((psy==py)&&(psx==px))
if((a[px1+px][py1+py]==r)||(a[px1+px][py1+py]=='&'))
{
{y=0;	
	for(int x=-1;x<3;x=x+2)
		if(x!=-psx)
	if(((a[px1][py1-1])!=r)||((a[px1][py1+1])!=r))
	if((a[px1+x][py1+y]!=r)&&(a[px1+x][py1+y]!='&'))	
	{px=x;
	py=y;}}
if((psy==py)&&(psx==px))
{x=0;
	for(int y=-1;y<3;y=y+2)	
	if(y!=-psy)
	if((((a[px1-1][py1])!=r)||(a[px1+1][py1])!=r))
	if((a[px1+x][py1+y]!=r)&&(a[px1+x][py1+y]!='&'))
	if((psy==py)&&(psx==px))
	{px=x;
	py=y;}}}

	a[px1][py1]=buff;

	if((a[px1+px][py1+py])!=r&&(a[px1+px][py1+py])!='&')
	{
		
	px1 =px1+px;
	py1 =py1+py;
	}

	if((a[px1][py1]=='<')||(a[px1][py1]=='>')||(a[px1][py1]=='^')||(a[px1][py1]=='v')||(a[px1][py1]=='|')||(a[px1][py1]=='-'))
		buff=00;
	else
	buff=a[px1][py1];
	

	a[px1][py1] = '&';

	coord(px1-px,py1-py);
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|12));
	cout<<a[px1-px][py1-py];
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|cv));
	coord(px1,py1);
	cout<<a[px1][py1];
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|9));

}
void prizrak::razbeg(int xx,int yy)//разбег
{
	razbegysl();
	if(razbegper!=1)
	step(xx,yy,13);
	razbegysl();
}

void prizrak::pogon(int xx,int yy,int color)//преследование
{	
	pogonysl();
	step(xx,yy,color);
	pogonysl();
}