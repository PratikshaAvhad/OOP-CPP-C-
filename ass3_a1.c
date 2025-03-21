#include<stdio.h>
#include<conio.h>
void merge(int a[],int left,int mid,int right)
{
 int i,j,k;	
 int n1=(mid-left+1);
 int n2=(right-mid);
 int a1[n1];
 int a2[n2];
  for(i=0;i<n1;i++)
  {
   a1[i]=a[left+i];
  }
  for(i=0;i<n2;i++)
  {
   a2[i]=a[mid+1+i];
  }
 i=0,j=0,k=left;
 while(i<n1 && j<n2)
{
 if(a1[i]<a2[j])
  {
   a[k++]=a1[i++];
  }
 else
  {
   a[k++]=a2[j++];
  }
}
while(i<n1)
 a[k++]=a1[i++];
while(j<n2)
 a[k++]=a2[j++];
}

void mergeSort(int a[],int left,int right)
{
  if(left<right)
  {
    int mid=(left+right)/2;
    mergeSort(a,left,mid);
    mergeSort(a,mid+1,right);
    merge(a,left,mid,right);
  }
}

int main()
{
 int a[100],n,i;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers in array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 mergeSort(a,0,n-1);
 printf("\n sorted array in ascending order\n");
  for(i=0;i<n;i++)
 {
  printf("%d\t",a[i]);
 }
}



