 #include<graphics.h>
 #include<stdlib.h>
 #include<stdio.h>
 #include<conio.h>
 int main(void)
{
	int gdriver=DETECT,gmode;
	int xmax,ymax;
	initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
	setcolor(getmaxcolor());
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
	circle(170,125,100);
		outtextxy(170,125,"Circle");
	rectangle(58,251,304,392);
		outtextxy(160,300,"Rectangle");
	arc(500,150,45,135,100);
		outtextxy(500,150,"Semi Circle");
	ellipse(500,300,0,360,75,25);
		outtextxy(500,300,"Ellipse");
	getch();
	closegraph();
	return 0;
}
