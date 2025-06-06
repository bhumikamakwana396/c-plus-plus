#include<iostream.h>
#include<conio.h>

class BankAccount
{
	char *name;
	double balance;

	public:

		BankAccount()
		{
			name="Alice";
			balance=1000.0;
		}

		void display()
		{
			cout<<"Name: "<<name<< ",Balance: "<<balance;
		}
};

void main()
{
	clrscr();
	BankAccount a1;
	a1.display();
	getch();

}