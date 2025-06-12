#include<iostream.h>
#include<conio.h>

class Shape
{
	public:
	double length,breadth,width,height;

	void getValue()
	{
		cout<<"\nEnter Length: ";
		cin>>length;
		cout<<"\nEnter Breadth: ";
		cin>>breadth;
		cout<<"\nEnter WIdth: ";
		cin>>width;
		cout<<"\nEnter Height: ";
		cin>>height;
	}
};

class Rectangle: virtual public Shape
{
	public:

	double area;

	void calarea()
	{
		area=length*width;
	}
};

class Triangle:virtual public Shape
{
	public:
	double area1;

	void calarea1()
	{
		area1=(1*breadth*height)/2;
	}
};

class AreaCalculator:public Rectangle,public Triangle
{
	public:

	void show()
	{
		cout<<"\nArea of Rectangle is: "<<area;
		cout<<"\nArea of Triangle is: "<<area1;
	}
};

void main()
{
	clrscr();
	AreaCalculator c1;
	c1.getValue();
	c1.calarea();
	c1.calarea1();
	c1.show();
	getch();
}

