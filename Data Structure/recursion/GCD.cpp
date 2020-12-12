#include<iostream>
using namespace std;

int gcd(int x1, int x2)
{
    if(x2!=0)
    {
        return gcd(x2, x1%x2);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int x1,x2;
    cout<<"Enter two Number :\n";
    cin>>x1>>x2;
    cout<<"GCD of two number is :"<<gcd(x1,x2);
    return 0;
}
