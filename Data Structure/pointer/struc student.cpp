#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    string name;
    string id;
    float cgpa;
    string bgroup;
};

int main()
{
    student s1,s2,s3, *p;
    cout<<"Name : ";
    cin>>s1.name;
    cout<<endl;
    cout<<"ID : ";
    cin>>s1.id;
    cout<<endl;
    cout<<"CGPA : ";
    cin>>s1.cgpa;
    cout<<endl;
    cout<<"BLOOD GROUP : ";
    cin>>s1.bgroup;
    cout<<endl;
    p=&s1;
    cout<<"print ID "<<p->id;
}
