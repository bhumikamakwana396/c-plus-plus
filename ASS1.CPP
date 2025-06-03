#include<iostream.h>
#include<conio.h>

void main()
{
	int i,n,j,count;
	clrscr();

	cout<<"\nEnter N:";
	cin>>n;

	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=n;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			cout<<" "<<i;
		}
	}
	getch();
}
