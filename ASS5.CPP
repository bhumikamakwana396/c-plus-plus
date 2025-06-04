#include<iostream.h>
#include<conio.h>

class BankAccount
{
	int ano,d,w;
	char aname[30];
	float amt,balance;
	public:

		void getData()
		{
			cout<<"\n\nEnter Account number: ";
			cin>>ano;
			cout<<"\nEnter Account holder name: ";
			cin>>aname;
			cout<<"\nEnter balance: ";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"\nEnter Amount: ";
			cin>>amt;
			if(amt>0)
			{
				balance=balance	+amt;
				cout<<"\nDeposite Rs "<<amt<<" successfully.\n";
			}
			else
			{
				cout<<"\nInvalid deposite amount\n";
			}
		}

		void withdraw()
		{
			cout<<"\nEnter amount: ";
			cin>>amt;
			if(amt>0 && amt<=balance)
			{
				balance=balance-amt;
				cout<<"\nWithdraw Rs "<<amt<<" successfully.\n";
			}
			else
			{
				cout<<"\nInvalid withdraw amount\n";
			}
		}

		void displayBalance()
		{
			cout<<"\n------------Transaction for 1-----------\n";
			cout<<"\nAccount number: "<<ano;
			cout<<"\nAccount Holder Name: "<<aname;
			cout<<"\nCurrent Balance is:Rs. "<<balance;
		}
};

void main()
{
	BankAccount b,b1;
	clrscr();
	b.getData();
	b.deposit();
	b.withdraw();
	b.displayBalance();

	b1.getData();
	b1.deposit();
	b1.withdraw();
	b1.displayBalance();

	getch();
}