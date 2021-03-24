/**
Highschool project for creating tic tac toe.
**/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void showchance(int iscircle)
{
	settextstyle(7,1,5);
	if(iscircle == 0)
	{
		setfillstyle(1, RED);
		bar(6,100,70,312);
		setcolor(GREEN);
		outtextxy(10,100,"O's TURN");
	}
	else
	{
		setfillstyle(1, GREEN);
		bar(6,100,70,312);
		setcolor(RED);
		outtextxy(10,100,"X's TURN");
	}
	settextstyle(7,0,2);
}
void main()
{
	int iscircle=0,con;
	int xa=0,xb=0,xc=0,xd=0,xe=0,xf=0,xg=0,xh=0,xi=0;
	int oa=0,ob=0,oc=0,od=0,oe=0,of=0,og=0,oh=0,oi=0;
	int win=0,draw=0;
	int gd=DETECT,gm;
	char c='\r';
	initgraph(&gd,&gm,"");
	cleardevice();
	while(con!=13)
	{
		if(c=='r')
		{
			cleardevice();
			xa=0;xb=0;xc=0;xd=0;xe=0;xf=0;xg=0;xh=0;xi=0;oa=0;ob=0;oc=0;od=0;oe=0;of=0;og=0;oh=0;oi=0;draw=0;win=0;iscircle=0;

		}

		setlinestyle(2,1,2);
		setcolor(9);
		settextstyle(2,0,4);
		line(200,100,200,400);
		line(300,100,300,400);

		line(100,200,400,200);
		line(100,300,400,300);
		setcolor(GREEN);
		outtextxy(140,160,"A");
		outtextxy(240,160,"B");
		outtextxy(340,160,"C");
		outtextxy(140,260,"D");
		outtextxy(240,260,"E");
		outtextxy(340,260,"F");
		outtextxy(140,360,"G");
		outtextxy(240,360,"H");
		outtextxy(340,360,"I");
		setcolor(14);
		settextstyle(8,0,3);
		outtextxy(50,20,"Press corresponding key for a 'x' or a 'o'");
		settextstyle(7,0,2);
		setcolor(RED);
		setlinestyle(0,1,3);
		draw++;
		c=getch();
		con=c;

		if(con==97&&iscircle==0&&xa==0&&oa==0&&win==0)
		{
			circle(150,150,40);
			circle(150,150,45);
			iscircle=1;
			oa=1;
			showchance(iscircle);
		}
		else if(con==97&&iscircle==1&&xa==0&&oa==0&&win==0)
		{
			line(110,110,190,190);
			line(100,210,190,90);
			iscircle=0;
			xa=1;
			showchance(iscircle);
		}
		if(con==98&&iscircle==0&&xb==0&&ob==0&&win==0)
		{
			circle(250,150,40);
			circle(250,150,45);
			iscircle=1;
			ob=1;
			showchance(iscircle);
		}
		else if(con==98&&iscircle==1&&xb==0&&ob==0&&win==0)
		{
			line(210,110,290,190);
			line(210,210,290,90);
			iscircle=0;
			xb=1;
			showchance(iscircle);
		}
		if(con==99&&iscircle==0&&xc==0&&oc==0&&win==0)
		{
			circle(350,150,40);
			circle(350,150,45);
			iscircle=1;
			oc=1;
			showchance(iscircle);
		}
		else if(con==99&&iscircle==1&&xc==0&&oc==0&&win==0)
		{
			line(310,110,390,190);
			line(310,210,390,90);
			iscircle=0;
			xc=1;
			showchance(iscircle);
		}
		if(con==100&&iscircle==0&&xd==0&&od==0&&win==0)
		{
			circle(150,250,40);
			circle(150,250,45);
			iscircle=1;
			od=1;
			showchance(iscircle);
		}
		else if(con==100&&iscircle==1&&xd==0&&od==0&&win==0)
		{
			line(110,210,190,290);
			line(110,310,190,190);
			iscircle=0;
			xd=1;
			showchance(iscircle);
		}
		if(con==101&&iscircle==0&&xe==0&&oe==0&&win==0)
		{
			circle(250,250,40);
			circle(250,250,45);
			iscircle=1;
			oe=1;
			showchance(iscircle);
		}
		else if(con==101&&iscircle==1&&xe==0&&oe==0&&win==0)
		{
			line(210,210,290,290);
			line(210,310,290,190);
			iscircle=0;
			xe=1;
			showchance(iscircle);
		}
		if(con==102&&iscircle==0&&xf==0&&of==0&&win==0)
		{
			circle(350,250,40);
			circle(350,250,45);
			iscircle=1;
			of=1;
			showchance(iscircle);
		}
		else if(con==102&&iscircle==1&&xf==0&&of==0&&win==0)
		{
			line(310,210,390,290);
			line(310,310,390,190);
			iscircle=0;
			xf=1;
			showchance(iscircle);
		}
		if(con==103&&iscircle==0&&xg==0&&og==0&&win==0)
		{
			circle(150,350,40);
			circle(150,350,45);
			iscircle=1;
			og=1;
			showchance(iscircle);
		}
		else if(con==103&&iscircle==1&&xg==0&&og==0&&win==0)
		{
			line(110,310,190,390);
			line(110,410,190,290);
			iscircle=0;
			xg=1;
			showchance(iscircle);
		}
		if(con==104&&iscircle==0&&xh==0&&oh==0&&win==0)
		{
			circle(250,350,40);
			circle(250,350,45);
			iscircle=1;
			oh=1;
			showchance(iscircle);
		}
		else if(con==104&&iscircle==1&&xh==0&&oh==0&&win==0)
		{
			line(210,310,290,390);
			line(210,410,290,290);
			iscircle=0;
			xh=1;
			showchance(iscircle);
		}
		if(con==105&&iscircle==0&&xi==0&&oi==0&&win==0)
		{
			circle(350,350,40);
			circle(350,350,45);
			iscircle=1;
			oi=1;
			showchance(iscircle);
		}
		else if(con==105&&iscircle==1&&xi==0&&oi==0&&win==0)
		{
			line(310,310,390,390);
			line(310,410,390,290);
			iscircle=0;
			xi=1;
			showchance(iscircle);
		}
		if((oa==1&&ob==1&&oc==1)||(od==1&&oe==1&&of==1)||(og==1&&oh==1&&oi==1)||(oa==1&&od==1&&og==1)||(ob==1&&oe==1&&oh==1)||(oc==1&&of==1&&oi==1)||(oa==1&&oe==1&&oi==1)||(og==1&&oe==1&&oc==1))
		{
			outtextxy(50,450,"O WINS press ENTER to exit and 'r' to restart");
			win=1;
			settextstyle(5,1,8);
			outtextxy(450,110,"  'O' Wins");
		}
		else if((xa==1&&xb==1&&xc==1)||(xd==1&&xe==1&&xf==1)||(xg==1&&xh==1&&xi==1)||(xa==1&&xd==1&&xg==1)||(xb==1&&xe==1&&xh==1)||(xc==1&&xf==1&&xi==1)||(xa==1&&xe==1&&xi==1)||(xg==1&&xe==1&&xc==1))
		{
			outtextxy(50,450,"X WINS press ENTER to exit and 'r' to restart");
			win=1;
			settextstyle(5,1,8);
			outtextxy(450,110,"  'X' Wins");

		}
		else if(draw==10)
		{
			outtextxy(100,450,"DRAW press 'r' to restart or ENTER to exit");
			settextstyle(5,1,8);
			outtextxy(450,110,"DRAW....");
		}
	}
	getch();
	closegraph();
}
