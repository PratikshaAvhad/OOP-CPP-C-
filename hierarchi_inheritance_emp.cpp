using namespace std;
#include<iostream>
class Emp
{
 public:
     int empcode;
	 char ename[20];
	 void acceptemp()	
	 {
	 	cout<<"Enter emp code name name:";
	 	cin>>empcode>>ename;
	 }
};
class Fulltime:public Emp
{
  public:
       int rate,days,sal;
	   void acceptf()
	   {
	     cout<<"Daily Rate and number of days:";
		 cin>>rate>>days;
		 sal=rate*days;   	
	   }	
	   void dispf()
	   {
	   	cout<<"\n Emp code="<<empcode;
	   	cout<<"\n Emp Name="<<ename;
	   	cout<<"\n Per Day Rate:"<<rate;
	   	cout<<"\n Number of Working Days:"<<days;
	   	cout<<"\n Salary="<<sal;
	   }
};
class Parttime:public Emp
{
	public:
		int hours,rate,sal;
		void accetp()
		{
		  cout<<"Enter number of Hours and rate per Hours:";
		  cin>>hours>>rate;
		  sal=hours*rate;
		}
		void dispp()
		{
	 	cout<<"\n Emp code="<<empcode;
	   	cout<<"\n Emp Name="<<ename;
	   	cout<<"\n Number of Hours:"<<hours;
	   	cout<<"\n Per Hours Rate:"<<rate;
	   	cout<<"\n Salary="<<sal;		
		}
};
int main()
{
	int ch;
	Fulltime ob;
	Parttime ob1;
  do
  {
	cout<<"\n1-accept fulltime \n 2-accept parttime \n 3-disp full" ;
	cout<<"\n 4-disp parttime";
	cout<<"\n Entter Choice:"; 	
	cin>>ch;
	switch(ch)
	{
	  case 1: ob.acceptemp();
	          ob.acceptf();
	          break;
	  case 2: ob1.acceptemp();
	          ob1.accetp();
	          break;
	  case 3: ob.dispf();
	          break;
	  case 4: ob1.dispp();
	          break;
	 
	}
}while(ch<5);
}

