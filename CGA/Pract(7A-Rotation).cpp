#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
int graphdriver = DETECT,graphmode;
initgraph(&graphdriver,&graphmode,"C:\\TC\\BGI");
outtextxy(230,70,"Himanshu Sharma 235");
int i;
int x2,y2,x1,y1,x,y,xn,yn;
double r11,r12,r21,r22,th;

printf("Enter the 2 lie end points:");
printf("x1,y1,x2,y2");
scanf("%d%d%d%d",&x1,&y1,&x2,&y2);

line(x1,y1,x2,y2);
printf("\n\n\nEnter the angle");
scanf("%lf",&th);
r11=cos((th*3.1428)/180);
r12=sin((th*3.1428)/180);
r21=(-sin((th*3.1428)/180));
r22=cos((th*3.1428)/180);
xn=((x2*r11)-(y2*r12));
yn=((x2*r21)+(y2*r22));
line(x1,y1,xn,yn);
getch();
closegraph();
return 0;
}
