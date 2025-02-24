using namespace std;
#include<iostream>
class college
{
	public:
		char cname[20],cadd[20];
		void accept()
		{
			cout<<"enter college name and address";
			cin>>cname>>cadd;
		}
};
class student:public college
{
	public:
		int rno;
		char name[20];
		void accept_s()
		{
			cout<<"enter student rno and name";
			cin>>rno>>name;
		}
};
class exam:public student
{
	public:
		int m[6];
		void accept_marks()
		{
			cout<<"enter six subject marks";
			for(int i=0;i<6;i++)
			cin>>m[i];
		}
};
class result:public exam
{
	public:
		int total;
		float p;
		void calculate()
		{
			for(int i=0;i<6;i++)
			total=total+m[i];
			p=(float)total/6;
		}
		void disp()
		{
			cout<<"\n college name="<<cname;
			cout<<"\n college address="<<cadd;
			cout<<"\n student roll no="<<rno;
			cout<<"\n student name="<<name;
			cout<<"\n total marks="<<total;
			cout<<"\n percentage="<<p;
		}
};
int main()
{
	result ob;
	ob.accept();
	ob.accept_s();
	ob.accept_marks();
	ob.calculate();
	ob.disp();
}


