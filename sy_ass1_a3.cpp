using namespace std;
#include<iostream>
int main()
{
	int n,d,r=0;
	cout<<"enter number";
	cin>>n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"reverse no is"<<r;
}
