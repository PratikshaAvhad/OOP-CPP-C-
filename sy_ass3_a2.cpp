#include<iostream>
using namespace std;
class cal
{
	public:
		float hig,s=0;
		void accept()
		{
			cout<<"enter hight";
		    cin>>hig;
		    s=s+hig;
		}
		
		 void disp()  
    	{
		   float a=s/3;	
		   cout<<"avg hight="<<a;
    	}
};
int main()
{
	int i;
	cal ob[3];
	for(i=0;i<3;i++)
	{
		ob[i].accept();
		
	}
   // for(i=0;i<3;i++)
	//{ 
	     
		ob[i].disp();
	//}
	 	
	
}
