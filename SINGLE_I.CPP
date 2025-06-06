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

void main()
{
	clrscr();
	B b1;
	b1.getA();
	b1.getB();
	b1.putA();
	b1.putB();
	getch();
}