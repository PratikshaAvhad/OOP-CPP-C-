using namespace std;
#include<iostream>
#include<string.h>
class student
{
	public:
		int roll;
		char sname[20],sclass[10]; //global
		
		void accept(int roll1,char sname1[20],char sclass1[20]) //local
		{
			roll=roll1;
			strcpy(sname,sname1);  //assign local to global
			strcpy(sclass,sclass1);
		}
		void disp()
		{
			cout<<"student rno="<<roll<<endl;
			cout<<"student name="<<sname<<endl;
			cout<<"student class="<<sclass;
		}
};
int main()
{
	student ob;
	ob.accept(201,"prachi","sy");
	ob.disp();
}

