#include<iostream.h>
#include<conio.h>

void main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	clrscr();

	cout<<"\nEnter array elemets A:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter %d row & %d column:";
			cin>>a[i][j];
		}
	}
	cout<<"\nEnter array elemets B:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nEnter %d row & %d column:";
			cin>>b[i][j];
		}
	}

	cout<<"\nArray elemets A:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nArray elemets B:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			cout<<"\t"<<b[i][j];
		}
		cout<<"\n";
	}

	cout<<"\nSum Of Array elemets A & B:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			c[i][j]=a[i][j]+b[i][j];
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			cout<<"\t"<<c[i][j];
		}
		cout<<"\n";
	}
	getch();
}