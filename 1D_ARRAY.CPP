#include<iostream.h>
#include<conio.h>

void main()
{
	int i,a[5],sum=0;
	clrscr();

	cout<<"\nEnter array elements:\n";

	for(i=0;i<5;i++)
	{
		cout<<"\nEnter array %d elemets:";
		cin>>a[i];
		sum+=a[i];
	}

	cout<<"\nArray elements is\n";
	for(i=0;i<5;i++)
	{
		cout<<"\n"<<a[i];
	}
	cout<<"\n\nSum= "<<sum;
	getch();
}