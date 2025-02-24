using namespace std;
#include<iostream>
class A
{
	public:
		A()  //default constructor
		{
			cout<<"\nI am defalt contructor of class-A";
		}
};
class B:public A
{
	public:
		B()  
		{
			cout<<"\nI am default contructor of class-B";
		}
};
int main()
{
	B ob;
}

