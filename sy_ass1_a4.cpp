using namespace std;
#include<iostream>
int main()
{
	int n,d,s=0,temp;
	cout<<"enter number";
	cin>>n;
	temp=n;
	while(n>0)
	{
		d=n%10;
		s=s+d*d*d;
		n=n/10;
	}
	if(s==temp)
	   cout<<"number is armstrong";
	else
	   cout<<"number is not armstrong";   
}
