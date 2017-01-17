//COMBINED PROJECT OF DATA STRUCTURES AND COMPUTER GRAPHICS
//SAKSHAM ARORA (021) AND DEEPAK KUMAR PANDEY (042)

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include"load.c"
#include"man2.c"
#include"instruct.c"
#include"about.c"

#define UP 72
#define DOWN 80
#define ENTER 13


dabout()
{
char c;
cleardevice();
while (1)
{
  while(!kbhit())
  {
       about();
  }
  c=getch();
  if (c==BACKSPACE)
  return;
  else;
}
}


dinstruct()
{
char c;
cleardevice();
while (1)
{
  while(!kbhit())
  {
       instructions();
  }
  c=getch();
  if (c==BACKSPACE)
  return;
  else;
}
}


void menu()
{
 int s=1,t=0,a,p=140;

 do
 {
  do
  {
   setbkcolor(BLACK);
   cleardevice();
   setcolor(YELLOW);
   settextstyle( 1, 0, 4 );
   outtextxy( 230, 30, "MENU" );
   setfillstyle(1,2);
   bar( 140, 80, 400, 82 );
   settextstyle( 1, 0, 1 );
   setcolor(YELLOW);
   outtextxy( 220, 137, "NEW GAME" );
   outtextxy( 220, 167, "INSTRUCTION" );
   outtextxy( 220, 197, "ABOUT" );
   outtextxy( 220, 227, "EXIT" );
   setcolor(4);
   rectangle( 200, p, 350, p + 20 );
   a=getch();
   switch(a)
   {
     case UP:if(p>140)
	     {
	      p-=30;
	      s--;
	     } break;
     case DOWN:if(p<230)
	       {
		p+=30;
		s++;
	       } break;
     case ENTER:a=1; break;

     default: break;
   }
  }
  while(a!=1);
  switch(s)
  {
   case 1:      {
		 cleardevice();

		 new_game();
		 setcolor(BLACK);
		}
   break;
   case 2:      {
		cleardevice();
		dinstruct();
		setcolor(BLACK);
		setfillstyle(SOLID_FILL,0);
		 floodfill(1,1,0);
		}
   break;
   case 3:      {
		cleardevice();
		dabout();
		setcolor (BLACK);
		setfillstyle(SOLID_FILL,0);
		 floodfill(1,1,0);
		}
   break;
   case 4:
		{
		closegraph();
		exit(0);
		break;
		}
  }
 }
 while(t==0);
 getch();
}

//MAIN PROGRAM

void main()
{
 int gdriver=DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode,"c:\\tc\\bgi");
 errorcode=graphresult();
 if(errorcode!=grOk)
 {
  printf("Graphics error: %s \n",grapherrormsg(errorcode));
  printf("Press any key to exit");
  getch();
  exit(1);
 }

load();

menu();

getch();

}
