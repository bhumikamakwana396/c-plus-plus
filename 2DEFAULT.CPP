#include<iostream.h>
#include<conio.h>

class Rectangle
{
	double breadth,length;
	public:

		Rectangle()
		{
				length=10;
				breadth=5;
		}

		int area()
		{
			return length*breadth;
		}
};

void main()
{
	clrscr();
	Rectangle r1;
	cout<<"\nArea of rectangle is: "<<r1.area();
	getch();
}