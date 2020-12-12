#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num;

    cout<<"How many number : ";
    cin>>num;

    int *p= (int *) malloc(num*4);
    for(int i=0; i<num; i++)
    {
        cin>>*(p+i);
    }
   for(int i=0; i<num; i++)
    {
          if(*(p+i)<0)
        {
           free(p+i);
           //delete *(p+i);
        }
    }
     for(int i=0; i<num; i++)
     {
        cout<<*(p+i);
     }
}
