#include<iostream.h>
#include<conio.h>

void main()
{
	int rno,tot,s1,s2,s3;
	char sname[30];
	double per;
	clrscr();

	cout<<"\nEnter student rno:";
	cin>>rno;
	cout<<"\nEnter student name:";
	cin>>sname;
	cout<<"\nEnter subject 1 marks:";
	cin>>s1;
	cout<<"\nEnter subject 2 marks:";
	cin>>s2;
	cout<<"\nEnter subject 3 marks:";
	cin>>s3;

	tot=s1+s2+s3;
	per=tot/3;

	cout<<"\nTotal marks="<<tot;
	cout<<"\nPercentage= "<<per;

	if(per>=70)
	{
		cout<<"\nDistiction";
	}
	else if(per>=60)
	{
		cout<<"\n1 class";
	}
	else if(per>=50)
	{
		cout<<"\n2 class";
	}
	else if(per>=40)
	{
		cout<<"\npass class";
	}
	else
	{
		cout<<"\nfail class";
	}
	getch();
}

