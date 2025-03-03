using namespace std;
#include<iostream>
int p,s,m=0,n;
char t[20],au[10],pub[30];
void accept()
{
	cout<<"enter titale of book";
	cin>>t;
	cout<<"enter author of book";
	cin>>au;
	cout<<"enter price of book";
	cin>>p;
	cout<<"enter publisher of book";
	cin>>pub;
	cout<<"enter stock of book";
	cin>>s;
}
void sale()
{
	cout<<"\n number of copies to be sale="<<m;
}
void pur()
{
	if(0>s)
	{
		cout<<"stock is not available";
	}
	else
	{
		cout<<"\n enter no of books to be purchase";
		cin>>n;
		s=s-n;
		m=m+n;
	}
}
void disp()
{
	cout<<"\n book title="<<t<<endl;
	cout<<"\n book author="<<au<<endl;
	cout<<"\n book price="<<p<<endl;
	cout<<"\n book publisher="<<pub<<endl;
	cout<<"\n book stock="<<s<<endl;
	cout<<"\n book sale="<<m<<endl;
	cout<<"\n book purchase="<<n;
}
int main()
{
	int ch;
	do
	{
		cout<<"\n 1-accept book details\n 2-sale book \n 3-purchase book\n 4-display";
		cout<<"\n enter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1:accept();
			       break;
			case 2:sale();
			       break;
		    case 3:pur();
			       break;
			case 4:disp();
			       break;	    		          
		}
	}while(ch<5);
}

