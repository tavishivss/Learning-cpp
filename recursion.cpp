#include<iostream>
using namespace std;

int fun(int n)
{
    if(n>0)
    {
        return fun(n-1)+n;
    }
    return 0;
}
int main()
{
    int a=5;
    cout<<fun(a);
    
}