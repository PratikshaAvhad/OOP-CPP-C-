using namespace std;
#include<iostream>
int main()
{
	int a,b,c;
	cout<<"enter 3 numbers";
	cin>>a>>b>>c;
	if(a>b && a>c)
	   cout<<"largest no is"<<a<<endl;
	else if(b>a && b>c)
	   cout<<"largest no is"<<b<<endl;
	else
	   cout<<"largest no is"<<c<<endl;
	if(a<b && a<c)
	   cout<<"smallest no is"<<a<<endl;
	else if(b<a && b<c)
	   cout<<"smallest no is"<<b<<endl;
	else
	   cout<<"smallest no is"<<c<<endl;               
}
