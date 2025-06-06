#include<iostream.h>
#include<conio.h>

class Student
{
	int age;
	char *name;
	public:

		Student()
		{
			name="Bhumika";
			age=21;
		}

		void display()
		{
			cout<<"\nName: "<<name;
			cout<<"\nAge: "<<age;
		}
};

void main()
{
	clrscr();
	Student s1;
	s1.display();
	getch();
}