using namespace std;
#include<iostream>
class customer
{
	public:
		char name[20];
		int phn;
		void accept_c()
		{
			cout<<"enter customer name";
			cin>>name;
			cout<<"enter customer phone no";
			cin>>phn;
		}
};
class depositor:public customer
{
	public:
		int accno,balance;
		void accept_d()
		{
			cout<<"enter account no";
			cin>>accno;
			cout<<"enter balance";
			cin>>balance;
		}
		
};
class borrower:public depositor
{
	public:
		int loan_no,loan_amt;
		void accept_b()
		{
			cout<<"enter loan no";
			cin>>loan_no;
			cout<<"enter loan amount";
			cin>>loan_amt;
		}
		void disp()
		{
			cout<<"\n customer name="<<name;
			cout<<"\n customer phone no="<<phn;
			cout<<"\n depositor acc no="<<accno;
			cout<<"\n depositor balance="<<balance;
			cout<<"\n loan no="<<loan_no;
			cout<<"\n loan amount="<<loan_amt;
		}
};
int main()
{
	borrower ob[100];
	int n,i;
	cout<<"enter limit";
	cin>>n;
	cout<<"enter n customer info\n ";
	for(i=0;i<n;i++)
	{
		ob[i].accept_c();
		ob[i].accept_d();
		ob[i].accept_b();
	}
	cout<<"display n customer";
	for(i=0;i<n;i++)
	{
		ob[i].disp();
	}
	
}
