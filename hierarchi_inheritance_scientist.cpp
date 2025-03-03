using namespace std;
#include<iostream>
class emp
{
	public:
		int eno;
		char ename[20];
		void accept_e()
		{
			cout<<"enter eno name";
			cin>>eno>>ename;
		}
};
class manager:public emp
{
	public:
		char designation[20],clube_dues[20];
		void accept_m()
		{
			cout<<"enter designation clube dues";
			cin>>designation>>clube_dues;
		}
		void disp()
		{
			cout<<"emp no="<<eno<<endl;
			cout<<"emp name="<<ename<<endl;
			cout<<"designation="<<designation<<endl;
			cout<<"clube dues="<<clube_dues;
			
		}
};
class scientist:public emp
{
	public:
		char dept[20],publication[20];
		void accept_s()
		{
			cout<<"enter department and publication";
			cin>>dept>>publication;
		}
		void disp()
		{
			cout<<"emp no="<<eno<<endl;
			cout<<"emp name="<<ename<<endl;
			cout<<"department="<<dept<<endl;
			cout<<"publication="<<publication;
		}
};
int main()
{
	int i,n,ch;
	cout<<"enter limit";
	cin>>n;
	
	manager ob[100];
	scientist ob1[100];
	do
	{
		cout<<"\n 1-accept manager\n 3-display manager\n 3-accept scientist\n 4-display scientist";
		cout<<"\n enter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter n emp info";
			       for(i=0;i<n;i++)
			       {
			       	 ob[i].accept_e();
			       	 ob[i].accept_m();
				   }
				   break;
				   
		    case 2:cout<<"display n emp info";
			       for(i=0;i<n;i++)
				   {
				   	 ob[i].disp();
				    }		   
				    break;
				    
			case 3:cout<<"enter n emp info";
			       for(i=0;i<n;i++)
			       {
			       	 ob1[i].accept_e();
			       	 ob1[i].accept_s();
				   }
				   break;
				   
			 case 4:cout<<"display n emp info";
			       for(i=0;i<n;i++)
				   {
				   	 ob1[i].disp();
				    }		   
				    break;	   
				   	    
		}
		
	}while(ch<=4);
}

