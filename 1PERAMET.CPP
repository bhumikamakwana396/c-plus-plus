#include<iostream.h>
#include<conio.h>

class Invoice
{
	char *itemName;
	int qty;
	float price;
	public:

		Invoice(char *item,int q,float rate)
		{
			itemName=item;
			qty=q;
			price=rate;
		}

		void printInvoice()
		{
			cout<<"\nItem Name: "<<itemName;
			cout<<"\nQuantity: "<<qty;
			cout<<"\nRate: "<<price;

			cout<<"\nTotal Price: "<<price*qty;
		}
};

void main()
{
	clrscr();
	cout<<"\nInvoice Generator\n\n";
	cout<<"\n--------------Item 1--------------\n";
	Invoice i1("Pizza",3,900);
	i1.printInvoice();
	cout<<"\n--------------Item 2--------------\n";
	Invoice i2("Burger",6,250);
	i2.printInvoice();
	getch();
}