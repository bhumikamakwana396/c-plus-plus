#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=4;i>=0;i--)
	{
		for(k=0;k<5-i;k++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
	for(i=0;i<5;i++)
	{
		for(k=0;k<5-i;k++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}

	getch();
}