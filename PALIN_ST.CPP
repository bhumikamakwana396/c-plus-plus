#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[30],s2[30];
	int x;
	clrscr();

	cout<<"\nEnter string s1:";
	cin>>s1;

	strcpy(s2,s1);

	strrev(s2);

	x=strcmp(s1,s2);

	if(x==0)
	{
		cout<<"\nString is palindrom";
	}
	else
	{
		cout<<"\nString is not palinsrom";
	}
	getch();
}