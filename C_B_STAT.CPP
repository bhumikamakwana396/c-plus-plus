#include<iostream.h>
#include<conio.h>

void main()
{
	int i;
	clrscr();
	for(i=1;i<=10;i++)
	{
		if(i==7)
		{
			break;
		}
		else if(i==3)
		{
			continue;
		}
		else
		{

			cout<<"\n"<<i;
		}
	}
	getch();
}