#define LEFT 	   75
#define RIGHT 	   77
#define UP 	   72
#define DOWN	   80
#define BACKSPACE  8
#define ENTER	   13
#define SPACEBAR   32
#define NUM        10

void face(int a)
{
setcolor(CYAN);
rectangle(100,425,200,479);
setfillstyle(SOLID_FILL, CYAN);
floodfill(101,426,CYAN);

//face
setcolor(YELLOW);
circle(150,452,25);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(150,452,YELLOW);

//eyes
setcolor(BLACK);
if (a)
{
fillellipse(137, 442, 2, 6);
fillellipse(163, 442, 2, 6);
}
else
{
fillellipse(137, 442, 2, 3);
fillellipse(163, 442, 2, 3);
}
setfillstyle(SOLID_FILL,BLACK);
floodfill(137,442,BLACK);
floodfill(163,442,BLACK);

//mouth
ellipse(150,460,180,360,15,9);
line(135,460,165,460);
floodfill(136,461,BLACK);

//tounge
if (a)
{
setcolor(RED);
ellipse(150,460,180,360,7,15);
line(143,460,157,460);
setfillstyle(SOLID_FILL,RED);
floodfill(150,474,RED);
setcolor(BLACK);
line(150,462,150,472);
}
}

void run_man(int a, int x)
{
setcolor(RED);
circle(350+x,280,5);
setfillstyle(SOLID_FILL, RED);
floodfill(350+x,280,RED);
line(350+x,285,350+x,295);
if(a)
{
//Rhand
line(350+x,288,345+x,295);
line(345+x,295,343+x,285);

//Lhand
line(350+x,288,355+x,298);
line(355+x,298,355+x,292);

//legs
line(350+x,295,347+x,302);
line(350+x,295,355+x,308);
}
else
{
//R_hand
line(350+x,288,345+10+x,295);
line(345+10+x,295,343+14+x,285);

//L_hand
line(350+x,288,355-10+x,298);
line(355-10+x,298,355-10+x,292);

//legs
line(350+x,295,347+6+x,302);
line(350+x,295,355-10+x,308);
}
}

void track(void)
{
 setcolor(GREEN);
 rectangle(250,0,250+200,479);
 rectangle(250-15,0,250+200+15,479);
 setfillstyle(XHATCH_FILL,GREEN);
 floodfill(250-2,2,GREEN);
 floodfill(250+200+2,2,GREEN);
}


void generate_bar( int n, int lt[], int tp[] )
{
int l,t;

l=250+random(172);
t=-(5+random(470));
lt[n]=l; tp[n]=t;
}

void generate_circle(int n, int cx[], int cy[], int cr[])
{
int x,y,r;

r=5+random(15);
x=250+r+random(200-2*r);
y=-(r+random(470));
cx[n]=x; cy[n]=y; cr[n]=r;
}

void scoring(long int *sco, int *vel )
{
char score[20];
if (*vel < 200)
*sco = *sco+20;
else if (*vel==200)
(*sco)++;
else
*sco = *sco-20;
setcolor (RED);
settextstyle(2,0,6);
sprintf(score, "SCORE: %d", *sco);
outtextxy(10,50,score);
sprintf(score, "VELOCITY %d km/h", 10000/(*vel));
outtextxy(10,100,score);
setcolor(YELLOW);
outtextxy(10,150,"MENU = BACKSPACE");
outtextxy(10,200,"PAUSE = SPACEBAR");
}



int out(int *move)
{
if 	(
	getpixel(350+(*move),280-5) != RED ||
	getpixel(350+(*move)+5,280) != RED ||
	getpixel(350+(*move)-5,280) != RED
	)
	return 1;
else return 0;
}



void game_over_face(int a)
{
		setcolor(CYAN);
		rectangle(100,425,200,479);
		setfillstyle(SOLID_FILL, CYAN);
		floodfill(101,426,CYAN);

		//wound
		if (a)
			{
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(145,427,7);
			floodfill(145,427,RED);
			};

		//face
		setcolor(YELLOW);
		circle(150,452,25);
		setfillstyle(SOLID_FILL,YELLOW);
		floodfill(150,452,YELLOW);

		//eyes
		setcolor(BLACK);
		setfillstyle(SOLID_FILL,BLACK);
		if (a)
			{
			circle(137, 442, 4);
			circle(163, 442, 8);
			}
		else
			{
			circle(137, 442, 8);
			circle(163, 442, 4);
			}
	       floodfill(137,442,BLACK);
	       floodfill(163,442,BLACK);

		//mouth
		ellipse(150,460,180,360,15,9);
		line(135,460,165,460);
		floodfill(136,461,BLACK);

		//TEETH
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		if (a)
			{
			rectangle(142,460,142+3,460+4);
			rectangle(149,460,149+3,460+4);

			floodfill(142+1,460+1,WHITE);
			floodfill(149+1,460+1,WHITE);
			}
		else
			{
			rectangle(156,460,156+3,460+4);
			rectangle(163,460,163+3,460+4);

			floodfill(156+1,460+1,WHITE);
			floodfill(163+1,460+1,WHITE);
			}
}


void score_box(int s)
{
  int x,y;
  char score[20]={'\0'};
  x=getmaxx()/2-150;
  y=getmaxy()/2-150;

		setcolor(LIGHTGRAY);
		setfillstyle(XHATCH_FILL,LIGHTGRAY);
		rectangle(x, y, x+300, y+225);
		floodfill(x+1,y+1,LIGHTGRAY);

		setcolor(CYAN);
		setfillstyle(SOLID_FILL,CYAN);


		rectangle(x+25, y+25, x+300-25, y+25+50);
		floodfill(x+25+1, y+25+1, CYAN);

		rectangle(x+25, y+125, x+300-25, y+125+50);
		floodfill(x+25+1, y+125+1, CYAN);

		setcolor(BLACK);
		settextstyle(2, 0, 4);
		sprintf(score, "YOURE SCORE %d",s);

		outtextxy(x+50, y+50, score);
		outtextxy(x+50, y+150, "PRESS BACKSPACE FOR MENU");
}


int game_over(int s)
{
  int a=0;
  char c='\0';

  while(1)
  {
	while(!kbhit())
	{
		cleardevice();
		score_box(s);
		game_over_face(a++%2);
		delay(300);
	}

	c=getch();
	if (c==BACKSPACE)
	return c;
	else;

   }
}


void new_game()
{
int a=0, velocity=200, tr1=0, tr2=-480;
int time=0, i=0, m=0;
int *vel, *t1, *t2, *move;
char *c;
long int *sco, score=0;
int cx[NUM], cy[NUM], cr[NUM], lt[NUM], tp[NUM];
vel=&velocity; t1=&tr1; t2=&tr2; move=&m; sco=&score;
clrscr();

	while (1)
	{

		while (!kbhit())
		{
			char msg[20]={'\0'};
			clearviewport();

			track();
			outtextxy(50,70,msg);
			scoring( sco, vel );
			run_man(a++%2,*move);

			face((a+1)%2);


			if (((*t1)%960)==0)
			{       i=NUM/2;
				while (i--)
				{
				generate_circle( i, cx, cy, cr );
				generate_bar( i, lt, tp  );
				}
				*t1=0;
			}
			if (((*t1)%480)==0 && *t1!=0)
			{       i=NUM-1;
				while (i>=NUM/2)
				{
				generate_circle( i, cx, cy, cr );
				generate_bar( i, lt, tp  );
				i--;
				}
				*t2=0;
			}

			i=NUM;
			while(i--)
			{
				int x;
				x=random(15);

				if (x==0 || x==4 )
				x=3;

				setcolor(x);
				setfillstyle(SOLID_FILL, x);
				if (i<NUM/2)
				{
				circle(cx[i], cy[i]+(*t1), cr[i]);
				bar3d(lt[i], tp[i]+(*t1), lt[i]+25, tp[i]+20+(*t1), 25/4, 1);
				floodfill(cx[i], cy[i]+(*t1), x);
				}
				else
				{
				circle(cx[i], cy[i]+(*t2), cr[i]);
				bar3d(lt[i], tp[i]+(*t2), lt[i]+25, tp[i]+20+(*t2), 25/4, 1);
				floodfill(cx[i], cy[i]+(*t2), x);
				}

			}

			if (out(move))
				{
				*c=game_over(*sco);
				return;
				}

			delay(*vel);

			*t1 = *t1 + 20;
			*t2 = *t2 +20;
			time++;
		}
		*c=getch();
		if (*c==LEFT && *move > -100)
		*move = *move - 10;
		else if (*c==RIGHT && *move < 100)
		*move = *move + 10;
		else if (*c==UP && *vel > 50)
		*vel = *vel - 5;
		else if (*c==DOWN && *vel < 400)
		*vel = *vel + 5;
		else if (*c==BACKSPACE)
			{
			*c=game_over(*sco);
			return;
			}
		else if (*c==SPACEBAR)
			{
			settextstyle(2,0,6);
			setcolor(BLACK);
			outtextxy(10,200,"PAUSE = SPACEBAR");
			setcolor(YELLOW);
			outtextxy(10,200,"CONTINUE = SPACEBAR");
			while (1)
				{
					while (!kbhit()) {}
					*c=getch();
					if (*c==SPACEBAR)
					{       setcolor(BLACK);
						outtextxy(10,200,"CONTINUE = SPACEBAR");
						break;
					}
					else ;
				}
			}
		else;
	}
}