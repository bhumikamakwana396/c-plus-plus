#include<iostream.h>
#include<conio.h>

void main()
{
	int a,b,c;
	clrscr();

	cout<<"\nEnter A:";
	cin>>a;
	cout<<"\nEnter B:";
	cin>>b;

	c=a+b;
	cout<<"\nAddition:"<<c;
	c=a-b;
	cout<<"\nSubstraction:"<<c;
	c=a*b;
	cout<<"\nMultiplication:"<<c;

	if(b!=0)
	{
		c=a/b;
		cout<<"\nDivision:"<<c;
		c=a%b;
		cout<<"\nModulo Division:"<<c;
	}
	else
	{
		cout<<"\nError To divided by zero";
	}
	getch();
}
