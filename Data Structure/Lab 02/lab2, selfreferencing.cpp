#include<iostream>
using namespace std;
struct student
{
    int x;
    struct student *n;
};
int main()
{
    student s1,s2,*s;
    s2.x=2;
    s2.n=NULL;
    s1.x=1;
    s1.n=&s2;
    s=&s1;
    cout<<s2.n;
}
