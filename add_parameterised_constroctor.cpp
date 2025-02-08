using namespace std;
#include<iostream>
class Add
{
	public:
		int c;
		Add(int a,int b)
		{
			c=a+b;
			cout<<"Addition="<<c;
		}
};
int main()
{
	Add ob(22,44);
}




