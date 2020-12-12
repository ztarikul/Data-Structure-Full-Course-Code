#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *l;
    struct node *r;
};
struct node *root=NULL, *temp;

struct node *insertion(node *r, int num)
{
    if(r==NULL)
    {
        r=new node;
        r->data=num;
        r->l=NULL;
        r->r=NULL;
    }
    if(r->data<=num)
    {
        r->r=insertion(r->r, num);
    }
    else
    {
        r->l=insertion(r->l, num);
    }
    return r;
}
void Preorder(node *r)
{
    if(r!=NULL)
    {
        cout<<r->data<<" ";
        Preorder(r->l);
        Preorder(r->r);
    }
}

int main()
{
    int n;
    while(1)
    {

        cout<<"\n\n\t\t 1. Insert "<<endl;
        cout<<"\t\t\ 2. Preorder"<<endl;
        cout<<"\t\t Enter Choice : ";
        cin>>n;
        if(n==1)
        {
            int num;
            cout<<endl;
            cout<<"Enter Number : ";
            cin>>num;
            root=insertion(root,num);
        }
        if(n==2)
        {
            Preorder(root);
        }
    }
}
