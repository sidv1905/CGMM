#include<iostream.h>
#include<graphics.h>
#include<conio.h>
voidffill(intx,inty,intocol,intfcol)
{
intccol = getpixel(x,y);
if(ccol==ocol)
{
putpixel(x,y,fcol);
ffill(x+1,y,ocol,fcol);
ffill(x,y+1,ocol,fcol);
ffill(x-1,y,ocol,fcol);
ffill(x,y-1,ocol,fcol);
}
}


void main()
{
clrscr();
intgd = DETECT,gm;
initgraph(&gd,&gm,"C://TurboC3//BGI");
cout<<"\t\t Flood Fill Algorithm \t\t"<<endl;
setcolor(GREEN);
cout<<"Enter coordinates of Triangle : "<<endl;
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
line(x1,y1,x2,y2);
setcolor(BLUE);
line(x1,y1,x3,y3);
setcolor(RED);
line(x2,y2,x3,y3);
intx,y;
cout<<"Enter coordinate of any interior point : ";
cin>>x>>y;
ffill(x,y,BLACK,YELLOW);
getch();
}
