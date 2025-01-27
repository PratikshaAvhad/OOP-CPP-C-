using namespace std;
#include<iostream>
int main()
{
	int f=0,s=1,t,i,n;
	cout<<"enter limit";
	cin>>n;
	cout<<"series";
	cout<<f<<"\t"<<s;
	for(i=1;i<n;i++)
	{
		t=f+s;
		cout<<"\t"<<t;
		f=s;
		s=t;
	}
}
