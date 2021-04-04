#include<graphics.h>

main(){
	initwindow(450,450);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);

	int rand=30;
	for(int col=30; col<390; col+=60){
		for(int row=30; row<390; row+=60){
			rectangle(row,col,row+60,col+60);	
		}
		//square solid fill
		for(int x=rand; x<390; x+=120)
			floodfill(x+10,col+10,YELLOW);
		rand = rand == 30 ? 90 : 30;
	}
					
	getch();
}
