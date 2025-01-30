using namespace std;
#include<iostream>
class point
{
	public:
		int x,y;
		void setpoint(int x,int y)
		{
			this->x=x;
			this->y=y;
		}
		void showpoint()
		{
			cout<<"co-ordinate of point=("<<x<<","<<y<<")";
		}
};
		int main()
		{
			point ob;
			ob.setpoint(100,200);
			ob.showpoint();
		}


