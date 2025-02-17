using namespace std;
#include<iostream>
class power
{
	public:
		void power(int x,int y=2)
		{
			int p=1;
			for(int i=1;i<=y;i++)
			{
				p=p*x;
			}
			cout<<"\n Base of Power="<<p;
		}
};
int main()
{
	power ob;
	ob.power(5);
	ob.power(4,5);
	ob.power(4,4);
}
