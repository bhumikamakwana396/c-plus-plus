#include<iostream.h>
#include<conio.h>

class Tops
{
	public:
		void test()
		{
			cout<<"\ntest with no argument";
		}
		void test(int a,int b)
		{
			cout<<"\ntest with 2 argument";
		}
		void test(int a)
		{
			cout<<"\ntest with 1 argument";
		}
};

void main()
{
	clrscr();
	Tops t1;
	t1.test();
	t1.test(10,20);
	t1.test(10);
	getch();
}