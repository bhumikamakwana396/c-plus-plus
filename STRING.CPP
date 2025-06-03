#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	int l1,x;
	char s1[30],s2[30],s3[30];
	clrscr();
	cout<<"\nEnter string s1:";
	cin>>s1;
	cout<<"\nEnter string s2:";
	cin>>s2;
	cout<<"\n***********************\n";
	l1=strlen(s1);
	cout<<"\nLength of string s1: "<<l1;
	x=strcmp(s1,s2);

	if(x==0)
	{
		cout<<"\nBoth string are same";
	}
	else
	{
		cout<<"\nBoth string are not same";
	}
	strcpy(s3,s1);
	cout<<"\nstring s3 copy after string is: "<<s3;
	strcat(s1,s2);
	cout<<"\nAfter s1 & s2 Merge: "<<s1;


	getch();
}