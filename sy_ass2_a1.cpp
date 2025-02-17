using namespace std;
#include<iostream>
inline float perimeter(float l,float w)
{
	return l*w*2;
}
inline float rectangle(float l,float w)
{
	return l*w;
}
int main()
{
	float l,w;
	cout<<"enter length and width";
	cin>>l>>w;
	cout<<"perimeter="<<perimeter(l,w)<<"\n";
	cout<<"area of rectangle="<<rectangle(l,w)<<endl;
}
