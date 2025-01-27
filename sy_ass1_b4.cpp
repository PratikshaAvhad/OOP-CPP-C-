using namespace std;
#include<iostream>
int main()
{
	int n,a[100],i=0;
	cout<<"enter no";
	cin>>n;
	while(n>0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	cout<<"binary no=";
	for(i=i-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
