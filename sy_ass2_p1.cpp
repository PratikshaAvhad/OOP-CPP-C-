using namespace std;
#include<iostream>
inline float add(float a,float b)
{
	return a+b;
}
inline float sub(float a,float b)
{
	return a-b;
}
inline float mult(float a,float b)
{
	return a*b;
}
inline float div(float a,float b)
{
	return a/b;
}
int main()
{
	float a,b;
	cout<<"enter two float nos";
	cin>>a>>b;
	cout<<"addition="<<add(a,b)<<endl;
	cout<<"substraction="<<sub(a,b)<<endl;
	cout<<"multiplication="<<mult(a,b)<<endl;
	cout<<"division="<<div(a,b)<<endl;
}




