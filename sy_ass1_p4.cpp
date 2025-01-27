using namespace std;
#include<iostream>
int main()
{
	int i,n,cnt=0;
	cout<<"enter number";
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		cnt=cnt+i;
	}
	if(cnt==n)
	  cout<<"number is perfect";
	else
	  cout<<"number is not perfect";  
}
