void instructions()
{
 settextstyle(6,0,5);
 setcolor(14);
 setbkcolor(4);
 outtextxy(70,30,"INSTRUCTIONS OF THE GAME");
 line(60,83,565,83);

 settextstyle(11,0,5);
 setcolor(11);

 outtextxy(100,150,"...GAME HAS BEEN CREATED FOR A PERSON OF ANY AGE...");
 outtextxy(100,190,"SOME EASY INSTRUCTIONS WHICH ARE TO BE FOLLOWED ARE:");

 outtextxy(100,250,"FOR INCREASING THE SPEED (also increase score)");
 setcolor(14);
 line(50,240,50,260);
 line(50,240,40,250);
 line(50,240,60,250);

 setcolor(11);
 outtextxy(100,290,"FOR DECREASING THE SPEED (also decrease score)");
 setcolor(14);
 line(50,280,50,300);
 line(50,300,40,290);
 line(50,300,60,290);

 setcolor(11);
 outtextxy(100,330,"FOR MOVING LEFT");
 setcolor(14);
 line(40,330,60,330);
 line(40,330,50,320);
 line(40,330,50,340);

 setcolor(11);
 outtextxy(100,370,"FOR MOVING RIGHT");
 setcolor(14);
 line(40,375,60,375);
 line(60,375,50,365);
 line(60,375,50,385);

 setcolor(11);
 outtextxy(100,410,"FOR PAUSE OR CONTINUE THE GAME");

 setcolor(14);
 rectangle(10,405,80,420);
 outtextxy(25,409,"SPACE");

 outtextxy(360,310,"THE MOST IMPORTANT OF ALL IS TO");
 outtextxy(420,350,"\"MIND YOUR HEAD\"");
 outtextxy(390,390,"FROM THE INCOMING OBSTACLES");
}