#include<iostream>
#include<cstring>
using namespace std;



struct student
{
    string name;
    int id;
    float cgpa;
    //string bgroup;
};

int main()
{
    student s[100], *p[100];
    int size;
    cout<<"Student Size : ";
    cin>>size;
        float hi=0;
        int index;
    for(int i=0; i<size; i++)
    {
        cout<<1+i<<" student"<<endl;
        //student s[i],*p[i];
        cout<<"Name : ";
        cin>>s[i].name;
        //cout<<endl;
        cout<<"ID : ";
        cin>>s[i].id;
        //cout<<endl;
        cout<<"CGPA : ";
        cin>>s[i].cgpa;
        cout<<endl;
        p[i]=&s[i];
        if(s[i].cgpa>hi)
        {
            hi=s[i].cgpa;
            index=i;
        }
    }
        for(int i=0; i<size; i++)
    {
        cout<<1+i<<" student"<<endl;
        //student s[i],*p[i];
        cout<<"Name : ";
        cout<<p[i]->name;
        cout<<endl;
        cout<<"ID : ";
        cout<<p[i]->id;
        cout<<endl;
        cout<<"CGPA : ";
        cout<<p[i]->cgpa;
        cout<<endl;

    }
    cout<<endl<<endl;
    cout<<"Higest CGPA"<<endl;
    cout<<p[index]->name<<endl;
    cout<<p[index]->id<<endl;
    cout<<p[index]->cgpa;



}

