using namespace std;
#include<iostream>
#include<conio.h>
class MyArray
{
	public:
		int a[100],i,n,t,pass;	
		void accept()
		{
			cout<<"enter limit";
			cin>>n;
			cout<<"enter array elements";
			 for(i=0;i<n;i++)
			 cin>>a[i];
		}
		void disp()
		{
		   	for(pass=1;pass<n;pass++)
         	{
		       for(i=0;i<n-pass;i++)
	         	{
		        	if(a[i]>a[i+1])
		        	{
			        	t=a[i];
				        a[i]=a[i+1];
				        a[i+1]=t;
		        	}
		        }
         	}
         	cout<<"ascending order=";
         	 for(i=0;i<n;i++)
         	  cout<<"\t"<<a[i];
		}
};
int main()
{
	MyArray ob;
	ob.accept();
	ob.disp();
}


