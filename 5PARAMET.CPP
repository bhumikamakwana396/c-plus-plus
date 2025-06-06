#include<iostream.h>
#include<conio.h>

class Course
{
	char *courseName;
	int duration;
	float fees;
	public:

		Course(char *name,int d,float f)
		{
			courseName=name;
			duration=d;
			fees=f;
		}

		void showDetail()
		{
			cout<<"\nCourse Name: "<<courseName;
			cout<<"\nDuration: "<<duration;
			cout<<"\nFees: "<<fees;
		}
};

void main()
{
	clrscr();
	cout<<"\nCourse Enrollment\n\n";

	Course c1("Java",1,100000);
	Course c2("PHP",6,50000);

	cout<<"\n---------------Student 1------------\n";
	c1.showDetail();
	cout<<"\n---------------Student 2------------\n";
	c2.showDetail();
	getch();
}