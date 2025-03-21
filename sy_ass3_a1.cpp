#include<iostream>
using namespace std;
class Student
{

		static int rno;
	    static char name[20];
		 //char cl='sy';
	  	public:
	void static accept()
		{
			cout<<"enter rno:";
			cin>>rno;
			cout<<"enter name:";
			cin>>name;
		}
		void disp()
		{
			int cnt;
			cnt++;
		   cout<<"enter rno"<<rno;
		   cout<<"enter name"<<name;
		   //cout<<"enter class"<<cl;
		   	cout<<"student count="<<cnt;
		}
};
   
			
		  
int main()
{
	Student ob;
	ob.accept();
	ob.disp();
}
