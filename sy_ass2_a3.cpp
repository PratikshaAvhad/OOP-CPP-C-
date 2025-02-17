using namespace std;
#include<iostream>
class bank_account
{
	public:
		int bank_no;
		char a_holder_name[20];
		int phn;
		int balance;
		int amt;
		
		void accept()
		{
			cout<<"enter bank no holder name contact no and balance";
			cin>>bank_no>>a_holder_name>>phn>>balance;
		}
		void deposite()
		{
			cout<<"enter amount";
			cin>>amt;
			
			balance=balance+amt;
		}
		void disp()
		{
			cout<<"bank no= "<<bank_no<<endl;
			cout<<"holder bank name= "<<a_holder_name<<endl;
			cout<<"contact no= "<<phn<<endl;
			cout<<"balance= "<<balance<<endl;
			cout<<"deposite amt= "<<amt<<endl;
		}
};
int main()
{
	bank_account ob;
	ob.accept();
	ob.deposite();
	ob.disp();
}

