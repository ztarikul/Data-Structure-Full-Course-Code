#include<iostream>
using namespace std;

int main()
{
    int *p, *q;
    int a[4]={1,2,3,4};
    int *pl[4];
    for(int i=0; i<4; i++)
    {
        pl[i]= &a[i];
        cout<<*pl[i]<<endl;
    }
}
