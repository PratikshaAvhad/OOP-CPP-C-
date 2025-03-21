 #include<iostream>
using namespace std;
class emp
{
	public:
		int id,sal;
		char name[20],dept[30],date[8];
		void accept();
        void disp(); 
};
       void emp:: accept()
		{
			cout<<"enter id";
			cin>>id;
			cout<<"enter name";
			cin>>name;
			cout<<"enter dept";
			cin>>dept;
			cout<<"enter salary";
			cin>>sal;
			cout<<"enter date of joining";
			cin>>date;
		}
		void emp::disp()
		{
		cout<<"emp id="<<id<<endl;	
		cout<<"emp name="<<name<<endl;	
		cout<<"emp dept="<<dept<<endl;	
		cout<<"emp date of joining="<<date<<endl;
		cout<<"emp salary="<<sal<<endl;		
		}
int main()
{
	emp ob[2];
int a[100],i;
  for(i=0;i<2;i++)
  {
  	ob[i].accept();
  }
  for(i=0;i<2;i++)
  {
  	ob[i].disp();
  }
  
}
