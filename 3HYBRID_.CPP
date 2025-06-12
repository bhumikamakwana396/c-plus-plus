#include<iostream.h>
#include<conio.h>

class Customer
{
	public:
	int ID;
	char name[30];
	double balance;

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

class Account: virtual public Customer
{
	public:

	void getBalance()
	{
		cout<<"\nEnter Balance: ";
		cin>>balance;
	}

};

class Transaction: virtual public Customer
{
	public:
	int amount;

	void deposit()
	{

		cout<<"\nEnter Amount: ";
		cin>>amount;
		cout<<"\n";
		balance+=amount;
		cout<<"\nDeposit Successfully\n";
	}

	void withdraw()
	{
		cout<<"\nEnter Amount: ";
		cin>>amount;

		if(amount>balance)
		{
			cout<<"\n\nInsufficieant Balance\n";
		}
		else
		{
			balance-=amount;
		}
		cout<<"\n\Withdraw Successfully\n";
	}
};

class Report: public Account, public Transaction
{
	public:

	void show()
	{
		disData();
		cout<<"\nFinal Amount: "<<Transaction::balance;
	}
};

void main()
{
	clrscr();
	Report r1;

	r1.getData();
	r1.getBalance();
	r1.deposit();
	r1.withdraw();

	cout<<"\n----Transaction Detail----\n";

	r1.show();
	getch();

}