#include<iostream>
using namespace std;
class b;
class a
{
	public:
		int n;
		void accept( float n)
		{
			this->n=n;
			cout<<"\n number="<<n;
		}
		friend class c;
};
class b
{
	public:
		int n1;
		void accept( float n1)
		{
			this->n1=n1;
			cout<<"\n number="<<n1;
		}
		friend class c;	
};
class c
{
	public:
		void mul(a ob1,b ob2)
		{
			int c=ob1.n*ob2.n1;
			cout<<"\n multiplecaton="<<c;
		}
};
int main()
{
	a ob1;
	ob1.accept(10);
	b ob2;
	ob2.accept(10);
	c ob3;
	ob3.mul(ob1,ob2);
	return 0;
	
}
