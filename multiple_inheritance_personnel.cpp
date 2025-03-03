using namespace std;
#include<iostream>
class personnel
{
	public:
		char name[20],add[20],email[20],birth_date[20];
		void accept_p()
		{
			cout<<"enter name address email birth date";
			cin>>name>>add>>email>>birth_date;
		}
};
class academic
{
	public:
	     float hsc,ssc;
	     char sclass[20];
	     void accept_a()
	     {
	      	cout<<"enter hsc per";
		    cin>>hsc;
		    cout<<"enter ssc per";
		    cin>>ssc;
		    cout<<"enter current class";
		    cin>>sclass;
    	}
};
class biodata:public personnel,public academic
{
	public:
		void disp()
		{
			cout<<"name="<<name<<endl;
			cout<<"address="<<add<<endl;
			cout<<"email="<<email<<endl;
			cout<<"birth date="<<birth_date<<endl;
			cout<<"hsc per="<<hsc<<endl;
			cout<<"ssc per="<<ssc<<endl;
			cout<<"current class="<<sclass<<endl;
		}
};
int main()
{
	biodata ob;
	ob.accept_p();
	ob.accept_a();
	ob.disp();
}




