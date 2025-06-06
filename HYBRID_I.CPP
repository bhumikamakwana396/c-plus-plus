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
			cout<<"\nA : "<<c;
		}
};
class D:public B,public C
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
	B b1;
	D d1;

	b1.getA();
	b1.getB();
	d1.getC();
	d1.getD();

	b1.putA();
	b1.putB();
	d1.putC();
	d1.putD();
	getch();
}