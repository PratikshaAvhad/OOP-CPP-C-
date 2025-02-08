using namespace std;
#include<iostream>
#include<iomanip>
class Demo
{
	public:
		int *a,s=0;
		float avg;
		Demo(int n)
		{
			a=new int[n];
			cout<<"enter n numbers";
			for(int i=0;i<n;i++)
				cin>>a[i];
			for(int i=0;i<n;i++)
			s=s+a[i];
			cout<<"\n total="<<s;
			avg=(float)s/n;
			cout<<"\n average="<<avg;
		}
};
int main()
{
	int n;
	cout<<"enter limit";
	cin>>n;
	Demo ob(n);
}


