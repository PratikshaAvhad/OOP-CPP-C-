using namespace std;
#include<iostream>
class college
{
	public:
		int cno;
		char cname[20],add[20];
		void accept_c()
		{
			cout<<"enter clg no name address";
			cin>>cno>>cname>>add;
		}
};
class teacher:public college
{
	public:
		int tno,sal;
		char tname[20];
		void accept_t()
		{
			cout<<"enter teacher no name salary";
			cin>>tno>>tname>>sal;
		}
		void disp()
		{
			cout<<"\n college no="<<cno;
			cout<<"\n college name="<<cname;
			cout<<"\n college address="<<add;
			cout<<"\n teacher no="<<tno;
			cout<<"\n teacher name="<<tname;
			cout<<"\n teacher salary="<<sal;
		}
};
class student:public college
{
	public:
		int rno;
		char name[20];
		float per;
		void accept_s()
		{
			cout<<"enter student rno name per";
			cin>>rno>>name>>per;
		}
		void disp()
		{
			cout<<"\n college no="<<cno;
			cout<<"\n college name="<<cname;
			cout<<"\n college address="<<add;
			cout<<"\n student rno="<<rno;
			cout<<"\n student name="<<name;
			cout<<"\n student per="<<per;
		}
};
int main()
{
	teacher ob;
	student ob1;
	
	ob.accept_c();
	ob.accept_t();
	ob.disp();
	ob1.accept_s();
	ob1.disp();
}



