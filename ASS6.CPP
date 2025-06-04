#include<iostream.h>
#include<conio.h>

class Rectangle
{
	int l,w;
	float area,perimeter;
	public:

		Rectangle()
		{
			cout<<"\nEnter Length: ";
			cin>>l;
			cout<<"\nEnter Width: ";
			cin>>w;
		}

		void areacal()
		{
			area=l*w;
		}
		void perimetercal()
		{
			perimeter=2*(l+w);
		}
		void showResult()
		{
			cout<<"\nArea of Rectangle is: "<<area;
			cout<<"\nParimeter of Rectangle is: "<<perimeter;
		}
};

void main()
{
	clrscr();
	Rectangle r1;
	r1.areacal();
	r1.perimetercal();
	r1.showResult();
	getch();
}