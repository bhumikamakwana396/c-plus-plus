#include<iostream.h>
#include<conio.h>

class A
{
	public:

		A()
		{
			cout<<"\nA's is default constructor";
		}
		void show()
		{
			cout<<"\nShow for class A";
		}

};
class B:public A
{
	public:

		B()
		{
			cout<<"\nB's is default constructor";
		}
		void show()
		{
			cout<<"\nShow for class B";
		}

};
class C:public B
{
	public:

		C()
		{
			cout<<"\nC's is default constructor";
		}
		void show()
		{
			cout<<"\nShow for class C";
		}

};

void main()
{
	clrscr();
	C c1;
	c1.show();
	getch();
}