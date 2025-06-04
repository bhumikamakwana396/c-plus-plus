#include<iostream.h>
#include<conio.h>

class Student
{
	int rno,marks[5],total,i;
	char sname[30];
	public:

		void getData()
		{
			cout<<"\nEnter Rollno: ";
			cin>>rno;
			cout<<"\nEnter student name: ";
			cin>>sname;

			for(i=0;i<5;i++)
			{
				cout<<"\nEnter subject "<<i+1<<" marks: ";
				cin>>marks[i];
			}
		}

		void calculateTotal()
		{
			total=0;

			for(i=0;i<5;i++)
			{
				total=total+marks[i];
			}
		}

		void displayData()
		{
			cout<<"\n************************\n\n";
			cout<<"\nStudent Information\n";
			cout<<"\nRollno: "<<rno;
			cout<<"\nStudent name: "<<sname;
			cout<<"\nTotal marks: "<<total;
		}
};

void main()
{
	Student s;
	clrscr();
	s.getData();
	s.calculateTotal();
	s.displayData();
	getch();
}

