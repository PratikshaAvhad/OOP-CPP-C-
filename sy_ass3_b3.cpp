using namespace std;
#include<iostream>
class Array1;   
class Array2
{
  public:
    Array2()
  	{
  	  cout<<"Enter Limit";
	  cin>>n;
	 cout<<"Enter n numbers:";
	  for(int i=0;i<n;i++)
	    cin>>a[i];	
	}	
  private:
  	int a[100],n;
  	friend void maximum(Array1 ob,Array2 ob1);
};

class Array1

{
  public:
   Array1()
  	{
  	  cout<<"Enter Limit";
      cin>>n;
         cout<<"Enter n numbers:";

	  for(int i=0;i<n;i++)

	    cin>>a[i];	
	}	
  private:

  	int a[100],n;

  		friend void maximum(Array1 ob,Array2 ob1);
};
void maximum(Array1 ob,Array2 ob1)
{

     int max=ob.a[0];
     for(int i=1;i<ob.n;i++)

     {
     	if(ob.a[i]>max)
     	  max=ob.a[i];
	 }

	 cout<<"\n MAx no="<<max;
      max=ob1.a[0];

     for(int i=1;i<ob1.n;i++)
     {
     	if(ob1.a[i]>max)
     	  max=ob1.a[i];
	 }
	 cout<<"\n MAx no="<<max;
}

int main()

{

	Array1 ob;

	Array2 ob1;

	maximum(ob,ob1);

}
