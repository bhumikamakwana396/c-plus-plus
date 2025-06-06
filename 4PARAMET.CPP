#include<iostream.h>
#include<conio.h>

class CartItem
{
	char *productName;
	int qty;
	float price;

	public:

		CartItem(char *pname,int q,float p)
		{
			productName=pname;
			qty=q;
			price=p;
		}

		void displayCartItem()
		{
			cout<<"\nProduct Name: "<<productName;
			cout<<"\nQuantity: "<<qty;
			cout<<"\nPrice: "<<price;
			cout<<"\nTotal Invoice: "<<qty*price;
		}
};

void main()
{
	clrscr();
	cout<<"\nShopping Cart System\n\n";
	CartItem c1("Dress",2,230);
	CartItem c2("Shirt",3,500);

	cout<<"\n---------------Product1------------\n";
	c1.displayCartItem();
	cout<<"\n---------------Product2------------\n";
	c2.displayCartItem();
	getch();
}