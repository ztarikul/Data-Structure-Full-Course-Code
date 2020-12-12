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

struct node *ins(node *r, int x)
{
    if(r==NULL)
    {
        r=new node;
        r->data=x;
        r->l=NULL;
        r->r=NULL;
    }
    else if(r->data<=x)
    {
        r->r=ins(r->r, x);
    }
    else
    {
        r->l=ins(r->l, x);
    }
    return r;
};
void pre(node *r)
{
    if(r!=NULL)
    {
        cout<<r->data<<" ";
        pre(r->l);
        pre(r->r);
    }
}
void post(node *r)
{
    if(r!=NULL)
    {
        post(r->l);
        post(r->r);
        cout<<r->data<<" ";
    }
}
void inor(node *r)
{
    if(r!=NULL)
    {
        inor(r->l);
        cout<<r->data<<" ";
        inor(r->r);
    }
}

void menu()
{
    while(1)
    {
        cout<<endl;
        cout<<"\t-----------MENU------------"<<endl;
        cout<<"\t 1. Insert Tree"<<endl;
        cout<<"\t 2. Pre Order"<<endl;
        cout<<"\t 3. Post Order"<<endl;
        cout<<"\t 4. In Order "<<endl;
        int ch;
        cout<<"\n\t Choice : ";
        cin>>ch;
        cout<<endl;
        if(ch==1)
        {
            int x;
            cout<<"Enter Value : ";
            cin>>x;
            root= ins(root, x);
        }
        if(ch==2)
        {
            pre(root);
        }
        if(ch==3)
        {
            post(root);
        }
        if(ch==4)
        {
            inor(root);
        }
    }
}

int main()
{
    menu();
}

