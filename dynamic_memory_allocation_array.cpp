using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
	float *a;
	int i,n;
	cout<<"enter limit";
	cin>>n;
	a=new float[n];
	cout<<"enter n numbers";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n n numbers";
	 for(i=0;i<n;i+2)
	  cout<<a[i]<<setw(8);
	  delete a;
}

