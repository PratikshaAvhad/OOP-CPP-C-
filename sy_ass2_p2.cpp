using namespace std;
#include<iostream>
int main()
{
	int i,n,*p;
	cout<<"enter n student info";
	cin>>n;
	p=new int[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter per";
		cin>>p[i];
	}
	cout<<"per";
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<endl;
	}
	delete p;
}


