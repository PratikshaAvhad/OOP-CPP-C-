#include<iostream>
using namespace std;
class b;
class a
{
	public:
		float n;
		void accept( float n)
		{
			this->n=n;
			cout<<"number="<<n;
		}
		friend class c;
};
class b
{
	public:
		float n1;
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
		void add(a ob1,b ob2)
		{
			float c=ob1.n+ob2.n1;
			cout<<"\n addition="<<c;
		}
};
int main()
{
	a ob1;
	ob1.accept(60.44f);
	b ob2;
	ob2.accept(46.84f);
	c ob3;
	ob3.add(ob1,ob2);
	return 0;
	
}
