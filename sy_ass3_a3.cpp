using namespace std;
#include<iostream>
  class demo
    {
    	public:
    		int a,b;
    		void accept()
    		{
    			cout<<"enter two numbers";
    			cin>>a>>b;
			}
			
			friend void min_max(demo ob);
	};
	void min_max(demo ob)
	{
		if(ob.a>ob.b)
		  cout<<"\n max number="<<ob.a;
		 else
		   cout<<"\n max number="<<ob.b; 
		if(ob.a<ob.b)
		  cout<<"\n min number="<<ob.a;
		else
		 cout<<"\n min number="<<ob.b;  
	}
	int main()
	{
		demo ob;
		ob.accept();
		min_max(ob);
	}
