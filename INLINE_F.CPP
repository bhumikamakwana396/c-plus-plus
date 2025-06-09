#include<iostream.h>
#include<conio.h>

inline squre(int a)
{
	return a*a;
}

inline cube(int x)
{
	return x*x*x;
}

void main()
{
	int n;
	clrscr();

	cout<<"\nEnter N:";
	cin>>n;

	cout<<"\nSqure of "<<n<<" is: "<<squre(n);
	cout<<"\nCube of "<<n<<" is: "<<cube(n);

	getch();
}
