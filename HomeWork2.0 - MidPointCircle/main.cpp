#include<graphics.h>
#include<math.h>

main(){
	initwindow(320,320);
	
	int x0=150, y0=150, r=100;

	int x = 0, y = r;
    int pk = 0;
 
    while (x <= y)
    {
		if (pk <= 0)
		{
		    x += 1;
		    pk += 2*x + 1;
		}
 
		else
		{
		    y -= 1;
		    pk -= 2*y + 1;
		}
		
		putpixel(x0 + x, y0 + y, YELLOW);
		putpixel(x0 + y, y0 + x, YELLOW);
		putpixel(x0 - y, y0 + x, YELLOW);
		putpixel(x0 - x, y0 + y, YELLOW);
		putpixel(x0 - x, y0 - y, YELLOW);
		putpixel(x0 - y, y0 - x, YELLOW);
		putpixel(x0 + y, y0 - x, YELLOW);
		putpixel(x0 + x, y0 - y, YELLOW);
		
    }
	
	getch();
	return 0;
}
