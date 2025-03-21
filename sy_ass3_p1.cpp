#include<iostream>
using namespace std;
class customer
{
	public:
		int id,cno;
		char name[20],add[30];
		void accept();
        void disp(); 
};
       void customer:: accept()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			cout<<"enter add";
			cin>>add;
			cout<<"enter cno";
			cin>>cno;
		}
		void customer::disp()
		{
		cout<<"\n cust id="<<id;	
		cout<<"\n cust name="<<name;	
		cout<<"\n cust add="<<add;	
		cout<<"\n cust cno="<<cno;	
		}
int main()
{
	customer ob;
	ob.accept();
	ob.disp();
}
