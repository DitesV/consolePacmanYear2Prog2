#include"H.h"
#include"Menu.h"








void menu::rispac()//отрисовка логотипа
{
SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|14));
coord(5,2);
cout<<r;
coord(13,2);
cout<<r;
coord(13,4);
cout<<r;
coord(16,2);
cout<<r;
coord(16,3);
cout<<r;
coord(17,3);
cout<<r;
coord(17,4);
cout<<r;
coord(18,2);
cout<<r;
coord(18,3);
cout<<r;
coord(26,2);
cout<<r;
coord(26,3);
cout<<r;
coord(27,3);
cout<<r;
coord(27,4);
cout<<r;
for(int i=1;i<6;i++)
{coord(3,i);
cout<<r;
coord(7,i);
cout<<r;
coord(9,i);
cout<<r;
coord(11,i);
cout<<r;
coord(15,i);
cout<<r;
coord(19,i);
cout<<r;
coord(21,i);
cout<<r;
coord(23,i);
cout<<r;
coord(25,i);
cout<<r;
coord(28,i);
cout<<r;}
for(int i=1;i<4;i++)
{coord(2+i,1);
cout<<r;
coord(2+i,3);
cout<<r;
coord(6+i,1);
cout<<r;
coord(6+i,3);
cout<<r;
coord(10+i,1);
cout<<r;
coord(10+i,5);
cout<<r;
coord(20+i,1);
cout<<r;
coord(20+i,3);
cout<<r;
}
coord(10,9);
cout<<"new game";
coord(10,11);
cout<<"winners";
coord(10,13);
cout<<"exit";
}	

	yrvn yroven;
	prizrak prizrk;
	prizrak prizrk2;
	prizrak prizrk3;
	prizrak prizrk4;
	pacman pacma;
void menu::scorezap()
{	int u=0;
	string str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("cls");
	char *nam=new char[11];
	cout<<endl<<"¬ведите им€(менее 10 знаков)"<<endl;
	while(u!=1)
	{
	cin>>nam;
	if(strlen(nam)<10)
	u=1;
	else
	cout<<"ќшибка.¬ведите им€(менее 10 знаков)"<<endl;}	
	ofstream f("tabl.txt", ios_base::app);
	f <<endl<<nam<<"-"<<sch2+sch3 << endl;
	SetConsoleCP(866);
	SetConsoleOutputCP(866);
}
void coord(int x, int y)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD s;
	s.X=x;
	s.Y=y;
	SetConsoleCursorPosition(hStdOut, s);
}
void menu::win()
{
			timerpr=0;
			timerpr2=0;
			timerpr3=0;
			timerpr4=0;
	system("cls");
	prizrk4.sett(15,3,0,-1);
	prizrk3.sett(15,4,0,-1);
	prizrk2.sett(15,5,0,-1);
	prizrk.sett(15,6,0,-1);
	if(los==0)
	yroven.yr1();	
	if(los==1)
	{
		dx1=2;dy1=2;
		yroven.otris();}
	pacma.dxdy();
	pacma.pacm();
	yroven.kray();
	coord(21,3);
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|14));
	cout<<"ready?";
    _getch();
	coord(21,3);
	cout<<"      ";
	coord(24,4);
	cout<<"score:";
	coord(21,6);
	cout<<"    lvl:";
}
void randd()
{
int x;
int y;
srand ( time(NULL) ); 
x=rand() % 170 + 1; 
y=rand() % 16 + 1; 
if((x<18)&&(popo==0))
if((x!=15&&y!=12)&&(x!=13&&y!=12)&&(x!=15&&y!=3)&&(x!=15&&y!=4)&&(x!=15&&y!=5)&&(x!=15&&y!=6))
if((a[x][y]==sharik)||(a[x][y]==0))
{	
if(a[x][y]==sharik)
sch2++;
a[x][y]='$';
popo++;
coord(x,y);
cout<<a[x][y];}

}
void menu::game()//ver 11/05
{
	int lop=500;
	sch3=0;
	life=3;
    lvl=1;
	slo=lvl*5;
	los=0;
			timerpr=0;
			timerpr2=0;
			timerpr3=0;
			timerpr4=0;
	prizrk4.sett(15,3,0,-1);
	prizrk3.sett(15,4,0,-1);
	prizrk2.sett(15,5,0,-1);
	prizrk.sett(15,6,0,-1);
	
	yroven.yr1();
	pacma.dxdy();
	pacma.pacm();
	yroven.kray();
	sch2=0;
	coord(21,3);
	SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|14));
	cout<<"ready?";
    _getch();
	coord(21,3);
	cout<<"      ";
	coord(24,4);
	cout<<"score:";
	coord(21,6);
	cout<<"    lvl:";

    while(pklav!=27)
	{
		if(interval==2)
		{
		randd();
		SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|7));
		coord(30,4);
		cout<<sch2+sch3;
		coord(30,6);
		cout<<lvl;
		coord(25,8);
		SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|14));
			
		cout<<life<<"*<";
		if((sch2+sch3)>lop)
		{
			life++;
			lop=lop+500;
		}
		SetConsoleTextAttribute(hStdOut,(WORD)((0<<4)|11));
			if (sch==sch2)
			{
				if(lvl>9)
					{system("cls");
					coord(10,4);
					cout<<"you win";
					Sleep(3000);
					scorezap();
					break;
				}
		coord(10,4);
		cout<<"NEXT LEVEL";
		Sleep(200);
		lvl++;
		slo=lvl*5;
			win();
			}
			if(timerpr4>27-(slo/2)&&timerpr4<=52){prizrk4.pogon(dx1,dy1,2);}
			if(timerpr4>=2&&timerpr4<=27-(slo/2)){prizrk4.pogon(17,2,2);}
			if(timerpr4<-18){prizrk4.razbeg(17,2);}
			if(timerpr3>31-(slo/2)&&timerpr3<=56){prizrk3.pogon(dx1,dy1,10);}
			if(timerpr3>=6&&timerpr3<=31-(slo/2)){prizrk3.pogon(2,2,10);}
			if(timerpr3<-14){prizrk3.razbeg(2,2);}
			if(timerpr2>35-(slo/2)&&timerpr2<=60){prizrk2.pogon(dx1,dy1,14);}
			if(timerpr2>=10&&timerpr2<=35-(slo/2)){prizrk2.pogon(17,16,14);}
			if(timerpr2<-10){prizrk2.razbeg(17,16);}
			if(timerpr>39-(slo/2)&&timerpr<=64){prizrk.pogon(dx1,dy1,15);}
			if(timerpr>=14&&timerpr<=39-(slo/2)){prizrk.pogon(2,16,15);}
			if(timerpr<-6){prizrk.razbeg(2,16);}

			if(los==1)
		{if(life==1)
{system("cls");
cout<<"game over";

Sleep(3000);
break;}
		else
{coord(24,4);
cout<<"you lose  ";
life--;
Sleep(1000);
pklav=0;
a[prizrk.px1][prizrk.py1]=prizrk.buff;
a[prizrk2.px1][prizrk2.py1]=prizrk2.buff;
a[prizrk3.px1][prizrk3.py1]=prizrk3.buff;
a[prizrk4.px1][prizrk4.py1]=prizrk4.buff;
win();
los=0;}				}
		
		if(_kbhit())
		{			
			pacma.klav();		
		}
		pacma.pole();
		interval=interval-2;
		}
		pacma.pacm();
		Sleep(100);	
		
		if(timerpr<-6)   
			if(prizrk.razbegper==1){prizrk.sett(15,6,0,-1);   
				prizrk.razbegper=0; sch3=sch3+10;}  
	
		if(timerpr2<-10) 
			if(prizrk2.razbegper==1){prizrk2.sett(15,6,0,-1); 
				prizrk2.razbegper=0; sch3=sch3+10;} 

		if(timerpr3<-14)  
			if(prizrk3.razbegper==1){prizrk3.sett(15,6,0,-1); 
				prizrk3.razbegper=0; sch3=sch3+10;}		

		if(timerpr4<-18)  
			if(prizrk4.razbegper==1){prizrk4.sett(15,6,0,-1); 
				prizrk4.razbegper=0; sch3=sch3+10;}  
		
		interval++; timerpr++; timerpr2++; timerpr3++; timerpr4++;
		
		if(timerpr4==52)
		{timerpr=14; timerpr2=10; timerpr3=6;timerpr4=2;}
		if(timerpr4==-18)
		{timerpr=14; timerpr2=10; timerpr3=6;timerpr4=2;}		
	}	
}
void menu::men()
{

int i=9;
while(i!=13)
{	system("cls");
	system("mode con cols=32 lines=15");
	rispac();
	
	while(pklav!=13)
	{
		coord(9,i);
		cout<<sharik;
		if(_kbhit())
		{
			pklav=_getch();
			coord(9,i);
			cout<<' ';
			if(i>8&&i<14)
				{
				if (pklav==72)
					if(i>=10)
						i=i-2;
				if(pklav==80)
					if(i<=12)
						i=i+2;
				}
		}
	}
		switch (i)
			{
		case 9: {
			game(); sch=0; } 
			break;
         case 11: {
			 system("cls");
			 SetConsoleOutputCP(1251); 
			 char po[20]; 
			 ifstream f("tabl.txt");
			 while (!f.eof())
			 { 
			 f>>po;
			 cout<<"      "<<po<<endl;
			 }
			 _getch();
			 SetConsoleOutputCP(866);
				  } break;
         case 13: {  } break;
		
         default : break; 
			}
		pklav=0;
}
}
