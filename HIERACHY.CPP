#include<iostream.h>
#include<conio.h>

class A
{
	int a;
	public:

		void getA()
		{
			cout<<"\nEnter A:";
			cin>>a;
		}
		void putA()
		{
			cout<<"\nA : "<<a;
		}
};

class B:public A
{
	int b;
	public:

		void getB()
		{
			cout<<"\nEnter B:";
			cin>>b;
		}
		void putB()
		{
			cout<<"\nB : "<<b;
		}
};
class C:public A
{
	int c;
	public:

		void getC()
		{
			cout<<"\nEnter C:";
			cin>>c;
		}
		void putC()
		{
			cout<<"\nC : "<<c;
		}
};
class D:public A
{
	int d;
	public:

		void getD()
		{
			cout<<"\nEnter D:";
			cin>>d;
		}
		void putD()
		{
			cout<<"\nD : "<<d;
		}
};

void main()
{
	clrscr();
	C c1;
	B b1;
	D d1;

	c1.getA();
	b1.getB();
	c1.getC();
	d1.getD();

	c1.putA();
	b1.putB();
	c1.putC();
	d1.putD();
	getch();
}