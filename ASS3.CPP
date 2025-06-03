#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int g,a=0,n;
	clrscr();

	srand(time(0));
	n=rand()%100+1;

	cout<<"\nEnter the number between 1 to 100\n\n";

	do
	{
		cout<<"\nEnter the guess number: ";
		cin>>g;
		a++;

		if(g>n)
		{
			cout<<"\nNumber guess in grater";
		}
		else if(g<n)
		{
			cout<<"\nNumber guess is lower";
		}
		else
		{
			cout<<"\nCongratulation! correct the geussing number to attempt "<<g;
		}
	}while(g!=n);
	getch();
}
