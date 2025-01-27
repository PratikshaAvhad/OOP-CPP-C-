using namespace std;
#include<iostream>
class student
{
	public:
		int rno,a[6],t,i;
		float p;
		char name[20];
		
		void accept()
		{
			cout<<"enter rno and name";
			cin>>rno>>name;
			cout<<"enter six sub marks";
			  for(i=0;i<6;i++)
			    cin>>a[i];
		}
		void calculate()
		{
			t=0;
			for(i=0;i<6;i++)
			  t=t+a[i];
			  p=(float)t/6;
		}
		void disp()
		{
			cout<<"\n total marks="<<t<<endl;
			cout<<"percentage="<<p;
		}
};
int main()
{
	student ob;
	ob.accept();
	ob.calculate();
	ob.disp();
}





