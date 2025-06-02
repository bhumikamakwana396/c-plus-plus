#include<iostream.h>
#include<conio.h>

void main()
{
	int n,sum=0;
	clrscr();

	cout<<"\nEnrer N:";
	cin>>n;

	while(n>0)
	{
		sum+=n;
		n--;
	}

	cout<<"\nSum= "<<sum;
	getch();
}