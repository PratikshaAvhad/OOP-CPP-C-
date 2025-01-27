using namespace std;
#include<iostream>
class maxavg
{
	public:
		void max(int a,int b,int c)
		{
			if(a>b && a>c)
			   cout<<"max no is="<<a<<endl;
			else if(b>a && b>c)
			   cout<<"max no is="<<b<<endl;
			else
			   cout<<"max no is="<<c<<endl;      
		}
		void min(int a,int b,int c)
		{
			if(a<b && a<c)
			   cout<<"min no is="<<a<<endl;
			else if(b<a && b<c)
			   cout<<"min no is="<<b<<endl;
			else
			   cout<<"min no is="<<c<<endl;     
		}
		void avg(int a,int b,int c)
		{
			int s=a+b+c/3;
			 cout<<"average no="<<s;
		}
};
int main()
{
	maxavg ob;
	ob.max(10,20,30);
	ob.min(33,44,21);
	ob.avg(20,31,33);
}




