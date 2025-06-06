#include<iostream.h>
#include<conio.h>

class Box
{
	double width,height,depth;
	public:

		Box()
		{
			width=3;
			height=4;
			depth=5;
		}
		Box(double w,double h,double d)
		{
			width=w;
			height=h;
			depth=d;
		}
		Box(Box &b)
		{
			width=b.width;
			height=b.height;
			depth=b.depth;
		}

		void volume()
		{
			cout<<"\nVolume Of Box is: "<<width*height*depth;
		}
};

void main()
{
	clrscr();
	Box b1;
	b1.volume();
	Box b2(4,5,6);
	b2.volume();

	Box b3(b1);
	b3.volume();
	getch();
}