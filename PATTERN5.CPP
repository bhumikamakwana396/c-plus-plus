#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,k;
	clrscr();

	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		for(k=0;k<5-i;k++)
		{
			cout<<" ";
		}
		for(k=0;k<5-i;k++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	getch();
}
