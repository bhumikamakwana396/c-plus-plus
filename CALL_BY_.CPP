#include<iostream.h>
#include<conio.h>

void swapp(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter value x & Y is: "<<a<<" "<<b;
}


void main()
{
	int x,y;
	clrscr();
	cout<<"\nEnter X:";
	cin>>x;
	cout<<"\nEnter Y:";
	cin>>y;

	cout<<"\nBefore value x & Y is: "<<x<<" "<<y;
	swapp(x,y);

	getch();
}

