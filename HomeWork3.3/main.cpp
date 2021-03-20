#include<graphics.h>
#include<iostream>

using namespace std;
main()
{
	int h,w,d, x0=150, y0=200;
	cout<<"Enter the height: ";
	cin>>h;
	cout<<"Enter the width: ";
	cin>>w;
	cout<<"Enter the depth: ";
	cin>>d;
	
	initwindow(600,500);
	setcolor(YELLOW);
	
	// verticals
    line(x0,y0,x0,y0+h);
    line(x0+w,y0,x0+w,y0+h);
    
	// horizontals
	line(x0,y0,x0+w,y0);
	line(x0,y0+h,x0+w,y0+h);
	
	// depth vertical
    line(x0+w+d,y0-(h/2),x0+w+d,y0+(h/2));
    
    // depth horizontal
    line(x0+d,y0-(h/2),x0+w+d,y0-(h/2));
    
    // depth diagonals
    line(x0,y0,x0+d,y0-(h/2));
    line(x0+w,y0,x0+w+d,y0-(h/2));
    line(x0+w,y0+h,x0+w+d,y0+(h/2));
	
	getch();
}
