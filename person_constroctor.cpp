using namespace std;
#include<iostream>
class Person
{
	public:
		char name[20];
		char addr[30];
		float salary;
		float tax;
		void accept()
		{
			cout<<"name address and salary";
			cin>>name>>addr>>salary;
		}
		void calculate()
		{
			if(salary<=20000)
			   tax=0;
			else if(salary>20000||salary<=40000)
			    tax=salary*5/100;
		    else if(salary>40000)
			    tax=salary*10/100;		   
		}
		void disp()
		{
			cout<<"name"<<"\t"<<name<<endl;
			cout<<"address"<<"\t"<<addr<<endl;
			cout<<"salary"<<"\t"<<salary<<endl;
			cout<<"tax amount"<<"\t"<<tax;
		}
};
int main()
{
	Person ob;
	ob.accept();
	ob.calculate();
	ob.disp();
}

