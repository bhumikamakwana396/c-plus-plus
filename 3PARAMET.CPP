#include<iostream.h>
#include<conio.h>

class Property
{
	char *location;
	int area;
	float price;
	public:

		Property(char *l,int a,float p)
		{
			location=l;
			area=a;
			price=p;
		}

		void displayProperty()
		{
			cout<<"\nLocation: "<<location;
			cout<<"\nArea: "<<area<<"sq.ft";
			cout<<"\nPrice: "<<price;
		}
};

void main()
{
	clrscr();
	Property p1("Bhavnagar",90,4500000);
	Property p2("Rajkot",100,5000000);

	cout<<"\nReal Estate Listing\n\n";
	cout<<"\n---------------Property1------------\n";
	p1.displayProperty();
	cout<<"\n---------------Property2------------\n";
	p2.displayProperty();
	getch();
}
