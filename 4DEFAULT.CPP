#include<iostream.h>
#include<conio.h>

class Complex
{
	int real,imag;
	public:

		Complex()
		{
			real=0;
			imag=0;
		}

		void display()
		{
			cout<<real<<" + "<<imag<< "i"<<endl;
		}
};

void main()
{
	clrscr();
	Complex c1;
	c1.display();
	getch();
}