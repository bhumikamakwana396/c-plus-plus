#include<iostream.h>
#include<conio.h>

class Customer
{
	public:
	int ID;
	char name[30];

	void getData()
	{
		cout<<"\nEnter ID: ";
		cin>>ID;
		cout<<"\nEnter Name: ";
		cin>>name;
	}
	void disData()
	{
		cout<<"\nID: "<<ID;
		cout<<"\nName: "<<name;
	}
};

class Account:public Customer
{
	public:
	double balance;

	void getBalance()
	{
		cout<<"\nEnter Balance: ";
		cin>>balance;
	}
};

class Transaction:public Customer
{
	public:
	int amount;
	double d,w;

	void deposit()
	{
		cout<<"\nEnter Ammount: ";
		cin>>amount;
		balance+=amount;
		cout<<"\nDeposit Amount success";
	}

	void withdraw()
	{
		cout<<"\nEnter Amount: ";
		cin>>amount;
		if(amount>balance)
		{
			cout<<"\nInsufficieant Balance";
		}
		else
		{
			balance-=amount;
		}
		cout<<"\nWithdraw amount success";
	}
};

class Report:public Account,public Transaction
{
	public:

	void show()
	{
		cout<<"\nFinal Amount: "<<d+w;
	}
};

void main()
{
	clrscr();
	Report r1;

	r1.Account::getData();
	r1.getBalance();
	r1.deposit();
	r1.withdraw();
	r1.Account::disData();
	r1.show();
	getch();
}