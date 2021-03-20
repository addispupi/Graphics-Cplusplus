#include<graphics.h>
#include<math.h>
#include<iostream>

using namespace std;
main()
{
	
	int y0 = 400, x0=40, h[4], w[4];
	
	cout<<"Bar Properties Between: \n \tHeight 50 - 400 \n \tWidth 20 - 100\n";
	cout<<"-------------------------------------------\n";
	for(int i=0; i<4; i++) {
		cout<<"\nEnter "<<i+1<<" bar properties: ";
		cout<<"\nHeight : ";
		cin>>h[i];
		cout<<" Width : ";
		cin>>w[i];
	}

	
	initwindow(650,450);
	setcolor(3);
	setfillstyle(SOLID_FILL, YELLOW);
	
	// graph x & y axis
	line(50,0,50,400);
	line(50,400,600,400);
	
	// graph y axis points
	line(40,50,50,50);
	line(40,100,50,100);
	line(40,150,50,150);
	line(40,200,50,200);
	line(40,250,50,250);
	line(40,300,50,300);
	line(40,350,50,350);
    
	for(int j=0; j<4; x0+= w[j], j++)
		bar(x0+20,y0,x0 + w[j],y0-h[j]);

	getch();
}
