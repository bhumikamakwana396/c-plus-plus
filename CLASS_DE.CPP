#include<iostream.h>
#include<conio.h>

class Employee
{
	char ename[20];
	int age;
	public:

		void collectdata();
		void displaydata();
};

void Employee::collectdata()
{

	cout<<"\nEnter name: ";
	cin>>ename;
	cout<<"\nEnter age: ";
	cin>>age;
}

void Employee::displaydata()
{
	cout<<"\nEmployee Name: "<<ename;
	cout<<"\nEmployee AGe: "<<age;
}

void main()
{
	clrscr();
	Employee e1;
	e1.collectdata();
	e1.displaydata();
	getch();
}