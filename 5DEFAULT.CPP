#include<iostream.h>
#include<conio.h>

class Car
{
	char *name;
	int year;
	public:

		Car()
		{
			name="TATA";
			year=2020;
		}

		void display()
		{
			cout<<"Brand Name: "<<name<<" Year: "<<year;
		}
};

void main()
{
	clrscr();
	Car c1;
	c1.display();
	getch();
}