#include<iostream>
using namespace std;

int isPrime(int num, int i)
{
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(num%i==0)
        {
            return 0;
        }
        else
        {
            isPrime(num, i-1);
        }
    }
}

int main()
{
    int num, prime;
    cout<<"Enter Number : ";
    cin>>num;
    prime=isPrime(num, num/2);
    if(prime==1)
    {
        cout<<num<<" is a Prime Number"<<endl;
    }
    else
    {
        cout<<num<< " is not a Prime Number"<<endl;
    }
}
