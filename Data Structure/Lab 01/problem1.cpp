#include<iostream>
using namespace std;
void findfact(int num, int *fact)
{
    *fact=1;
    for(int i=1; i<=num; i++)
    {
        *fact=*fact *i;
    }
    cout<<"Factorial of the given number :"<<*fact;
}
int main()
{
    int num, p;
    cout<<"Enter Number : ";
    cin>>num;
    findfact(num, &p);
}
