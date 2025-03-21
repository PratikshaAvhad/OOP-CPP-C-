using namespace std;
#include<iostream>
class student
{
	public:
		int pno,price;
		 char pname[20];
		 
     void accept()
      {
      	 cout<<"enter pno pname price:";
      	 cin>>pno>>pname>>price;
	  }
	  
	 void display()
	    {
	     	cout<<"product no="<<pno<<endl;
		 	cout<<"product name="<<pname<<endl;
		 	cout<<"product price="<<price<<endl;
		 }
};
int main()
{
	
	int a[10],i,n;
	{ 
	    cout<<"enter limit:";
	     cin>>n;
		student ob[n];
		 cout<<"enter n product info:";
		for(i=0;i<n;i++)
		{
			ob[i].accept();
			//ob[i].calc();
		
		}
		cout<<"display info\n ";
		 for(i=0;i<n;i++)
		{
			 	ob[i].display();
		}
	}
} 
