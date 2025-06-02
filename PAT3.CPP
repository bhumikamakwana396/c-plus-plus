#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=5;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
}