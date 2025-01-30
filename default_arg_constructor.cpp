using namespace std;
#include<iostream>
class Add
{
	public:
		Add(int a,int b=10,int c=20)
		{
			int d=a+b+c;
			cout<<"addition="<<d<<endl;
		}
};
int main()
{
	Add ob(100,200,300);
	Add ob1(100,200);
	Add ob2(100);
}




