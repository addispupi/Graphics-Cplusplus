#include<graphics.h>
main()
{
	initwindow(600,540);
	setcolor(YELLOW);
	
	int angle = 0, r=150;
	struct arccoordstype a;
	
	// outer & inner Circle
	circle(295,263,177);
	circle(295,263,123);
	
	while(angle<=360){	
		setcolor(BLACK);
		
		arc(getmaxx()/2,getmaxy()/2,angle,angle+2,r);	
		getarccoords(&a);
		
		setcolor(GREEN);
		circle(a.xstart,a.ystart,25);
		
		angle = angle+10;
		delay(50);
	}
	getch();
}

