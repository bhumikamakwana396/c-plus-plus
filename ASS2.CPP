#include<iostream.h>
#include<conio.h>

void main()
{
	int a[5],i,j,tot=0;
	float avg;
	clrscr();

	cout<<"\nEnter student marks\n";
	for(i=0;i<5;i++)
	{

		for(j=0;j<3;j++)
		{
			cout<<"\nEnter Student "<<i+1<<" Marks: ";
			cin>>a[j];
			tot=tot+a[j];

		}
		cout<<"\n***************************\n";

	}
	cout<<"\n\nTotal Marks of student is:"<<tot;
	cout<<"\n\n****************************\n";
	avg=tot/5;
	cout<<"\n\nAverage of Student is: "<<avg;

	getch();
}