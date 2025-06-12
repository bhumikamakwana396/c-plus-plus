#include<iostream.h>
#include<conio.h>

class Person
{
	public:
	int roll_no;
	char  name[30];

		void getData()
		{
			cout<<"\nEnter Rollno: ";
			cin>>roll_no;
			cout<<"\nEnter Name: ";
			cin>>name;
		}
		void displayData()
		{
			cout<<"\nRollno: "<<roll_no;
			cout<<"\nName: "<<name;
		}
};

class Test:public Person
{
	public:
	int s1,s2;

	void getMarks()
	{
		cout<<"\nEnter Mark of subject 1: ";
		cin>>s1;
		cout<<"\nEnter marks of subject 2: ";
		cin>>s2;
	}
};

class Sports:public Person
{
	public:
	int score1,score2;

		void getScore()
		{
			cout<<"\nEnter Cricket Score: ";
			cin>>score1;
			cout<<"\nEnter Kho-Kho Score: ";
			cin>>score2;
		}
};

class Result:public Test,public Sports
{
	public:
	int tper;
	int tscore;

		void calculate()
		{
			tper=(s1+s2)/2;
			tscore=score1+score2;
		}
		void show()
		{
			cout<<"\nTotal Percantage is: "<<tper;
			cout<<"\nTotal Score Is: "<<tscore;
		}
};

void main()
{
	clrscr();
	Result r1;

	r1.Test::getData();
	r1.getMarks();
	r1.getScore();
	r1.calculate();
	r1.Test::displayData();
	r1.show();

	getch();
}


