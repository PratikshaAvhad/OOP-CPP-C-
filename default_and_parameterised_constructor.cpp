using namespace std;
#include<iostream>
class MyNumber
{
	public:
		int a,b,c;
		MyNumber()
		{
			a=11;
			b=12;
			c=30;
		}
		MyNumber(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void avg()
		{
			int d=a+b+c/3;
			cout<<"average of 3 nos="<<d<<endl;
		}
};
int main()
{
	MyNumber ob;
	ob.avg();
	MyNumber ob1(44,33,11);
	ob1.avg();
}


