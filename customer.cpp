using namespace std;
#include<iostream>
#include<string.h>
class customer
{
	public:
		int cid,phn;     //global
		char cname[20],add[20];
		
		void accept(int cid1,int phn1,char cname1[20],char add1[20]) //local
		{
			cid=cid1;
			phn=phn1;
			strcpy(cname,cname1);    //aasign local to global
			strcpy(add,add1);
		}
		void disp()
		{
			cout<<"customer id="<<cid<<endl;
			cout<<"customer name="<<cname<<endl;
			cout<<"customer phone="<<phn<<endl;
			cout<<"customer address="<<add;
		}
};
int main()
{
	customer ob;
	ob.accept(101,8799882114,"pratu","shrirampur");
	ob.disp();
}



