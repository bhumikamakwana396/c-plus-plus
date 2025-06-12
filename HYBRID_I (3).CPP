#include<iostream.h>
#include<conio.h>

class AB
{
	public:
	int a,b;
		void getAB()
		{
			cout<<"\nEnter A: ";
			cin>>a;
			cout<<"\nEnter B: ";
			cin>>b;
		}
};

class C:public AB
{
	public:
	int sum;
	void calsum()
	{
		sum=a+b;
	}

};
class D:public AB
{
	public:
	int sub;
	void calsub()
	{
	   sub=a-b;
	}
};


class E:public C,public D
{
	public:
	void show()
	{
		cout<<"\nAddition: "<<sum;
		cout<<"\nSubstraction: "<<sub;
	}
};
void main()
{
	clrscr();
	E e1;

	e1.C::getAB();
	e1.D::getAB();
	e1.calsum();
	e1.calsub();
	e1.show();

	getch();
}


