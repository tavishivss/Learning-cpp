#include<iostream>
using namespace std;
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
  int a[]={30,20,70,80,10};
  int n=sizeof(a)/sizeof(a[0]);
  display(a,n);
  int i,j,key;
  for(i=1;i<n;i++)
  {
    key=a[i];
    j=i-1;
    while(j>=0 && a[j]>key)
    {
        a[j+1]=a[j];
        j=j-1;        
    }
    a[j+1]=key;
  }
  display(a,n);
}