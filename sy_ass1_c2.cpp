using namespace std;
#include<iostream>
int main()
{
	int n,i,s=0;
	cout<<"enter limit";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<i/i<<"!"<<"+";
		s=s+(i/i);
	}
	cout<<"\b="<<s;
}
