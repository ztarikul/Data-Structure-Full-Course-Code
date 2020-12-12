#include<iostream>
using namespace std;
///Call by value
int call_by_value(int *a, int *b)
{
    int temp= *a;
    *a= *b;
    *b=temp;
    cout<<"B" <<*b;
}
int main()
{
    int a=10, b=20;
    call_by_value(&a,&b);
}
