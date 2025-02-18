using namespace std;
#include<iostream>
class circle_demo
{
	public:
		void area(float r=4.5f);
		void circum(float r=2.4f);
};
void circle_demo::area(float r)
{
	float a=2*3.14*r*r;
	cout<<"area  of circle="<<a<<endl;
}
void circle_demo::circum(float r)
{
	float c=2*3.14*r;
	cout<<"circumference of circle="<<c<<endl;
}
int main()
{
	circle_demo ob;
	ob.area(3.4f);
	ob.circum(1.3f);
}

