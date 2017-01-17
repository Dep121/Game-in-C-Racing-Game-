void load()
{
int x, y, rb=25, rs=2;
int i=1, c=1, rot=5;

x=getmaxx()/2-40;
y=getmaxy()/2+80;

 setcolor(WHITE);
 settextstyle(SMALL_FONT, HORIZ_DIR, 4);
 outtextxy(445,455,"Copyright(c) All Rights Reserved");
 outtextxy(480,465,"by SAKSHAM & DEEPAK.");

 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,3);
 outtextxy(x-50,y+50,"....loading....");

 settextstyle(1,HORIZ_DIR,8);
 setcolor(RED);
 outtextxy(getmaxx()/2-275,getmaxy()/2-200,"RUN FOR LIFE");

 settextstyle(1,HORIZ_DIR,3);
 setcolor(YELLOW);
 outtextxy(getmaxx()/2-100,getmaxy()/2-70,"....WELCOME....");


while(c<=9*rot)
	{
	int a=0, b;
	if (i%10==0)	i=1;

	for (b=1; b<=2; b++)
	{
		if (b==1)
		{
		setcolor(WHITE);
		setfillstyle(SOLID_FILL,WHITE);
		}
		else
		{
		setcolor(getbkcolor());
		setfillstyle(SOLID_FILL,getbkcolor());
		}
	switch (i)
	{
		case 1 :        {
				a++;
				circle(x,y-rb,rs);

				if (b==1) floodfill(x,y-rb,WHITE);
				else floodfill(x,y-rb,getbkcolor());
				}
		case 2 : 	{
				a++;
				circle(x+rb/1.414,y-rb/1.414,rs);

				if (b==1) floodfill(x+rb/1.414,y-rb/1.414,WHITE);
				else floodfill(x+rb/1.414,y-rb/1.414,getbkcolor());
				}
		case 3 :	{
				a++;
				circle(x+rb,y,rs);

				if (b==1) floodfill(x+rb,y,WHITE);
				else floodfill(x+rb,y,getbkcolor());
				}
		case 4 : 	{
				a++;
				circle(x+rb/1.414,y+rb/1.414,rs);

				if (b==1) floodfill(x+rb/1.414,y+rb/1.414,WHITE);
				else floodfill(x+rb/1.414,y+rb/1.414,getbkcolor());

				if (a==4) break;
				}
		case 5 : 	{
				a++;
				circle(x,y+rb,rs);

				if (b==1) floodfill(x,y+rb,WHITE);
				else floodfill(x,y+rb,getbkcolor());

				if (a==4) break;
				}
		case 6 : 	{
				a++;
				circle(x-rb/1.414,y+rb/1.414,rs);

				if (b==1) floodfill(x-rb/1.414,y+rb/1.414,WHITE);
				else floodfill(x-rb/1.414,y+rb/1.414,getbkcolor());

				if (a==4) break;
				}
		case 7 : 	{
				a++;
				circle(x-rb,y,rs);

				if (b==1) floodfill(x-rb,y,WHITE);
				else floodfill(x-rb,y,getbkcolor());

				if (a==4) break;
				}
		case 8 : 	{
				a++;
				circle(x-rb/1.414,y-rb/1.414,rs);

				if (b==1) floodfill(x-rb/1.414,y-rb/1.414,WHITE);
				else floodfill(x-rb/1.414,y-rb/1.414,getbkcolor());

				if (a==4) break;
				}

	}//end switch

	if (b==1)  delay(100);
	}//end for
	i++;
	c++;
	}//end while

}