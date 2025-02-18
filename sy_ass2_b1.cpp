using namespace std;
#include<iostream>
int main()
{
	float *a;
	int n,i;
	cout<<"enter limit";
	cin>>n;
	a=new float[n];
	cout<<"enter n float number";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n alternative n numbers";
	for(i=0;i<n;i+2)
	cout<<a[i]<<setw(8);
	delete a;
}

