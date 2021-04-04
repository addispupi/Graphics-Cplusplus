#include <graphics.h>

void filler(int x,int y,int border,int set){
	if(getpixel(x,y)!=border && getpixel(x,y)!=set){
		putpixel(x,y,set);
		filler(x+1,y,border,set);
		filler(x-1,y,border,set);
		filler(x,y+1,border,set);
		filler(x,y-1,border,set);
	}
}
main(){
	initwindow(520,500);
	setcolor(RED);
	
	//CUSTOM GEOMETRIC SHAPE FILL
	//horizontals	
	line(350,100,150,100);
	line(100,350,400,350);
	
//	//verticals
	line(100,350,100,200);
	line(400,350,400,200);
	
//	//little horizontals 
	line(100,200,150,200);
	line(400,200,350,200);
	
//	//little verticals
	line(350,200,350,100);
	line(150,200,150,100);
	
	filler(151,101,RED,YELLOW);
	
	
	//CIRCLE FILL
	delay(150);
	cleardevice();
	
	circle(250,250,150);
	filler(250,250,RED,YELLOW);
	
	///RECTANGLE FILL
	delay(150);
	cleardevice();
	
	rectangle(100,100,400,350);
	filler(101,150,RED,YELLOW);

	//ELLIPSE FILL
	delay(150);
	cleardevice();
	
	ellipse(250,250,0,360,200,100);
	filler(250,250,RED,YELLOW);

	getch();
}

