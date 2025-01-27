using namespace std;
#include<iostream>
int main()
{
	int a,b,c,ch;
	cout<<"enter 2 nos";
	cin>>a>>b;
	cout<<"enter your choice";
	cout<<"\n 1-addition\n2-subsraction\n3-multiplication\n4-division";
	cin>>ch;
	switch(ch)
	{
		case 1:c=a+b;
		      cout<<"addition="<<c<<endl;
		      break;
		case 2:c=a-b;
		      cout<<"substraction="<<c<<endl;
		      break;
	    case 3:c=a*b;
		      cout<<"multiplication="<<c<<endl;
		      break;
		case 4:c=a/b;
		      cout<<"division="<<c<<endl;
		      break;
	    default:cout<<"choice is invalid";
		        break;		  	  		        
	}
}
