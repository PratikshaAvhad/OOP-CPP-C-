using namespace std;
#include<iostream>
class college
{
	public:
		    int cno;
			char cname[20];
			char cadd[20];
		void accept_c()
		{
			cout<<"enter college no";
			cin>>cno;
			cout<<"college name";
			cin>>cname;
			cout<<"college address";
			cin>>cadd;
		}
};
class student:public college
{
	public:
			int rno;
			char name;
			float per;
			void accept_s()
			{
			   cout<<"enter student roll no";
			   cin>>rno;
			   cout<<"enter student name";
			   cin>>name;
			   cout<<"enter percentage";
			   cin>>per;
		    }
		void disp()
		{
			cout<<"\n college no="<<cno;
			cout<<"\n college name="<<cname;
			cout<<"\n colege address="<<cadd;
			cout<<"\n---------------------------------------------------------";
			cout<<"\n student rno="<<rno;
			cout<<"\n student name="<<name;
			cout<<"\n student per="<<per;
		}
};
int main()
{
	student ob;
	ob.accept_c();
	ob.accept_s();
	ob.disp();
	
}

