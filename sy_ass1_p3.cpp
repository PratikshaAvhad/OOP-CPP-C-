using namespace std;
#include<iostream>
int main()
{
	int n,i,cnt=0;
	cout<<"enter number";
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		cnt=cnt+1;
	}
	if(cnt==1)
	  cout<<"number is prime";
	else
	   cout<<"number is not prime";   
	
}

