using namespace std;
#include<iostream>
int main()
{
	int a[100],n,i,m,p;
	cout<<"enter limit";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter array elements\n ";
		cin>>a[i];
	}
	cout<<"enter no to modify";
	cin>>m;
	cout<<"enter position";
	cin>>p;
	cout<<"modify array";
	for(i=0;i<n;i++)
	{
		if(i==p)
		{
			a[i]=m;
			cout<<a[i]<<endl;
		}
		else
		{
			cout<<a[i]<<endl;
		}
	}
}

