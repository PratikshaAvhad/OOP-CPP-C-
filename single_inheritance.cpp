using namespace std;
#include<iostream>
class A
{
	public:
		int x=10;
};
class B:public A
{
	public:
		int y=20;
		 void disp()
		 {
		 	cout<<"value of x="<<x<<endl;
		 	cout<<"value of y="<<y;
		 }
};
int main()
{
	B ob;
	ob.disp();
}


