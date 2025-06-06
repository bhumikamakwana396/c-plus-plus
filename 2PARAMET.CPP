#include<iostream.h>
#include<conio.h>

class FlightTicket
{
	    char *passengerName;
	    char *destination;
	    float price;

	    public:

		FlightTicket(char *name,char *dest,float p)
		{
			passengerName=name;
			destination=dest;
			price=p;
		}

		void displayTicket()
		{
			cout<<"\nPassenger Name: "<<passengerName;
			cout<<"\nDestination: "<<destination;
			cout<<"\nPrice: Rs. "<<price;
		}
};

void main()
{
	clrscr();
	FlightTicket f1("ABC","Mumbai",35000);
	FlightTicket f2("MNO","Gouva",50000);
	FlightTicket f3("PQR","Banglor",40000);

	cout<<"\nFlight Ticket System\n\n";
	cout<<"\n---------------Passenger1------------\n";
	f1.displayTicket();
	cout<<"\n\n---------------Passenger2------------\n";
	f2.displayTicket();
	cout<<"\n\n---------------Passenger2------------\n\n";
	f3.displayTicket();

	getch();
}