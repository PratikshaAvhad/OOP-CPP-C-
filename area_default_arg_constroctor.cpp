using namespace std;
#include<iostream>
class Circle
{
	public:
		Circle(float r=8.5f)
		{
			float a=3.14*r*r;
			cout<<"\n Area of Circle="<<a;
		}
};
int main()
{
	Circle ob;
	Circle ob1(8.32f);
}



