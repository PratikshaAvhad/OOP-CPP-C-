using namespace std;
#include<iostream>
#include<string.h>
class emp
{
	public:
			int eno,sal;
			char ename[20];
			
			void accept(int eno1,char ename1[20],int sal1)
			{
				eno=eno1;
				strcpy(ename,ename1);
				sal=sal1;
		    }
			void disp()
			{
				cout<<"emp no="<<eno<<endl;
				cout<<"emp name="<<ename<<endl;
				cout<<"emp salary="<<sal<<endl;
			}
};
		int main()
		{
			emp ob;
			ob.accept(101,"om",55000);
			ob.disp();
		}




