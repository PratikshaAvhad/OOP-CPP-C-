using namespace std;
#include<iostream>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=4;j>=i;j--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<"\n";
	}
}

