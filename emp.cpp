using namespace std;
#include<iostream>
#include<string.h>
class emp
{
	public:
		int eid,sal;     //global
		char ename[20],jdate[20],dept[20];
		
		void accept(int eid1,char ename1[20],int sal1,char dept1[20],char jdate1[20]) //local
		{
			eid=eid1;
			sal=sal1;
			strcpy(ename,ename1);
			strcpy(dept,dept1);    //aasign local to global
			strcpy(jdate,jdate1);
		}
		void disp()
		{
			cout<<"emp id="<<eid<<endl;
			cout<<"emp name="<<ename<<endl;
			cout<<"emp salary="<<sal<<endl;
			cout<<"emp department="<<dept<<endl;
			cout<<"date of joining="<<jdate;
		}
};
int main()
{
	emp ob;
	ob.accept(501,"pratikshha",45000,"computer","21-Nov-2024");
	ob.disp();
}






