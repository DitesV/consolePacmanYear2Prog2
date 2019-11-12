#include"Pacman.h"
#include"peremen.h"
void pacman::dxdy()
{
dx=1;
dy=0;
}
void pacman::pacm() //закрашивание головы пакмэна
{	
	 if((dx == 1) && (dy == 0)) 
	 {if(interval==0) a[dx1][dy1] = '<'; else a[dx1][dy1] = '-';}
	 if((dx == -1) && (dy == 0)) 
	 {if(interval==0) a[dx1][dy1] = '>'; else a[dx1][dy1] = '-';}
	 if((dx == 0) && (dy == 1))  
	 {if(interval==0) a[dx1][dy1] = '^'; else a[dx1][dy1] = '|';}
	 if((dx == 0) && (dy == -1)) 
	 {if(interval==0) a[dx1][dy1] = 'v'; else a[dx1][dy1] = '|';}
			SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|12));	
			if((a[dx1-dx][dy1-dy]==60)||(a[dx1-dx][dy1-dy]==62)||(a[dx1-dx][dy1-dy]==118)||(a[dx1-dx][dy1-dy]==94)||(a[dx1-dx][dy1-dy]=='-')||(a[dx1-dx][dy1-dy]=='|'))
			a[dx1-dx][dy1-dy] = 00;
	coord(dx1-dx,dy1-dy);
	if(a[dx1-dx][dy1-dy]==00)
	cout<<a[dx1-dx][dy1-dy];	
	coord(dx1,dy1);
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|14));
	cout<<a[dx1][dy1];
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|9));
}

void pacman::pole() //отрисовка пакмэна в массиве, увеличение счета
{
	if(a[dx1+dx][dy1+dy]==bsharik)
		{
			cout<<"\a";
			if(slo<=50)
			{timerpr=-56+slo;
			timerpr2=-60+slo;
			timerpr3=-64+slo;
			timerpr4=-68+slo;}
		}
	if(a[dx1+dx][dy1+dy]==sharik)
		{
			sch2=sch2+1;			
		}
	if(a[dx1+dx][dy1+dy]=='$')
		{
			sch3=sch3+50;
			popo--;			
		}
		if(a[dx1+dx][dy1+dy]!=r)		
		{		
		dx1 =dx1+dx;
		dy1 =dy1+dy;
		}	
			pacm();
}


void pacman::klav() //изменение направления
{
     pklav = _getch();
	 if(pklav==32)
		 getch();
	 if(pklav==224)
	 { 
		pklav = _getch();
		switch (pklav)
     {
         case 75: { dx = -1; dy = 0; } break;
         case 72: { dx = 0; dy = -1; } break;
         case 77: { dx = 1; dy = 0; } break;
         case 80: { dx = 0; dy = 1; } break;
         default : break; 
	 }}}