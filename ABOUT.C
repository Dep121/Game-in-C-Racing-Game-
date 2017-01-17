void about()
{
 int i;

 settextstyle(1,0,4);
 setcolor(4);
 setbkcolor(15);
 outtextxy(20,30,"ABOUT THE DEVELOPERS OF THE GAME");

 settextstyle(11,0,1);
 setcolor(1);
 outtextxy(110,150,"THIS \"RFL GAME\" HAS BEEN CODED AND COMPILED BY");

 settextstyle(11,0,1);
 setcolor(4);
 outtextxy(70,200,"SAKSHAM ARORA");
 line(65,210,175,210);
 outtextxy(78,220,"02120902714");
 outtextxy(78,240,"CSE 3RD SEM");
 outtextxy(103,260,"GBPEC");

 outtextxy(400,200,"DEEPAK KUMAR PANDEY");
 line(395,210,555,210);
 outtextxy(433,220,"04220902714");
 outtextxy(433,240,"CSE 3RD SEM");
 outtextxy(457,260,"GBPEC");

 setcolor(CYAN);
 rectangle(240,225,340,279);
 setfillstyle(SOLID_FILL, CYAN);
 floodfill(301,226,CYAN);

 setcolor(YELLOW);
 circle(290,252,25);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(301,253,YELLOW);

 setcolor(1);
 ellipse(290,260,180,360,15,9);
 circle(280,245,2);
 setfillstyle(SOLID_FILL,1);
 floodfill(280,245,1);
 circle(300,245,2);
 setfillstyle(SOLID_FILL,1);
 floodfill(300,245,1);

 setcolor(1);
 outtextxy(215,310,"UNDER THE GUIDANCE OF");
 setcolor(4);
 outtextxy(225,330,"Ms. RINKLE ASWANI");
 outtextxy(235,350,"ASST. PROFESSOR");
 outtextxy(270,370,"GBPEC");

 setfillstyle(SOLID_FILL,CYAN);
 for(i=0;i<650;i++)
 {
  bar(0,465,i,485);
  bar(0,0,i,15);
 }
 for(i=0;i<550;i++)
 {
  bar(0,0,15,i);
  bar(627,0,640,i);
 }
}