#include<iostream>
using namespace std;

int main()
{
  int n1=10,n2=20,i,hcf,lcm;

  if(n2>n1){
    int temp=n1;
    n1=n2;
    n2=temp;
  }
  
  for(i=1;i<=n2;i++) {
    if ((n1%i==0)&&(n2%i==0));
    hcf=i;
  }
 cout<<hcf;
 lcm=(n1*n2)/hcf;  
 cout<<lcm;
}