#include<iostream>
using namespace std;
class distance
{
	public:
		int feet,inches;
		void accept()
		{
			cout<<"enter feet and inches";
			cin>>feet>>inches;
		}
		void disp()
		 {
		 	cout<<"feet="<<feet;
		 	cout<<"inches="<<inches;
		 }
		 void add(ob feet,ob1 feet)
		 {
		 	int c=ob.feet+ob1.feet;
		 	cout<<"addition="<<c;
		 }
};
int main()
{
	distance ob;
	distance ob1;
	ob.accept();
	ob.disp();
	ob1.accept();
	ob.add(ob,ob1);
	
}
