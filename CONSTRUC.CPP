#include<iostream.h>
#include<conio.h>

class A
{
	public:

		A()
		{
			cout<<"\nA's is default constructor";
		}

};
class B:public A
{
	public:

		B()
		{
			cout<<"\nB's is default constructor";
		}

};
class C:public B
{
	public:

		C()
		{
			cout<<"\nC's is default constructor";
		}

};

void main()
{
	clrscr();
	C c1;
	getch();
}


