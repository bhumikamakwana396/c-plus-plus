#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	char s1[50],c;
	int l,i,count=0;
	clrscr();

	cout<<"\nEnter string s1:";
	cin>>s1;
	l=strlen(s1);

	cout<<"\nAfter choose any one character in above string:";
	cin>>c;

	for(i=0;i<l;i++)
	{
		if(s1[i]==c)
		{
			count++;
		}
	}
	cout<<"\nTotal word is: "<<count;
	getch();
}
