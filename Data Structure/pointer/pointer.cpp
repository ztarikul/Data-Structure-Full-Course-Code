#include<iostream> ///Pointer practice
using namespace std;
int main()
{
    int a=2, b=3;
    int *p, *q;
    p=&a;
    cout<<"P :"<<*p<<endl;
    q=p;
    cout<<"q :"<<*q<<endl;
    *q=10;
    cout<<"q :"<<*q<<endl;;
    cout<<"P :"<<*p<<endl;
    q= &b;
    cout<<"q :"<<*q<<endl;
    *p=*q;
    cout<<"p :"<<*p<<endl;

}
