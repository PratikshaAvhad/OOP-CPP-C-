using namespace std;
#include<iostream>
int main()
{
	int n,i,f=1;
	cout<<"enter number";
	cin>>n;
    for(i=1;i<=n;i++)
    {
    	f=f*i;
	}
	cout<<"factorial of given no is="<<f;
}
