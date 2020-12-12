#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *r;
    struct node *l;
};
struct node *root=NULL ,*temp;
struct node *inser_t(node *r, int x)
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
        r->r=inser_t(r->r, x);
    }
    else
    {
        r->l= inser_t(r->l, x);
    }
    return r;
}


struct node *search_op(node *r, int sch)
{
    if(r!=NULL)
    {
        if(r->data==sch)
        {
            return r;
        }
        else if(r->data>sch)
        {
           return search_op(r->l,sch);
        }
        else
        {
           return search_op(r->r,sch);
        }
    }
}

void preorder(node *r)
{
     if(r!=NULL)
     {
         cout<<r->data<<" ";
         preorder(r->l);
         preorder(r->r);
     }
}

void postorder(node *r)
{
  if(r!=NULL)
  {
      postorder(r->l);
      postorder(r->r);
      cout<<r->data<<" ";
  }
}

void inorder(node *r)
{
    if(r!=NULL)
    {
        inorder(r->l);
        cout<<r->data<<" ";
        inorder(r->r);
    }
}

node  *Max(node *r)
{
    if(r != NULL)
    {
        if(r->r != NULL)
        {
            return Max(r->r);
        }
        else
            return r;
    }
}

node *Min(node *r)
{
    if(r != NULL)
    {
        if(r->l!= NULL)
        {
            return Min(r->l);
        }
        else
            return r;
    }
}



int main()
{
    int n;
    while(1)
    {
        cout<<endl;
        cout<<"\t\t --- MENU ----"<<endl;
        cout<<"\t\t 1.Insert tree"<<endl;
        cout<<"\t\t 2.Pre order"<<endl;
        cout<<"\t\t 3.Post order"<<endl;
        cout<<"\t\t 4.In oder"<<endl;
        cout<<"\t\t 5.Search"<<endl;
        cout<<"\t\t 6.Maximum"<<endl;
        cout<<"\t\t 7.Minimum"<<endl;
        cout<<"\t\t 8.Exit"<<endl;

        cout<<"\t\t Enter your choice : ";
        cin>>n;
        cout<<endl<<endl;
        if(n==1)
        {
            int x;
            cout<<"Enter a Value : ";
            cin>>x;
            root= inser_t(root, x);
        }
        if(n==2)
        {
            preorder(root);
        }
        if(n==3)
        {
            postorder(root);
        }
        if(n==4)
        {
            inorder(root);
        }
        if(n==5)
        {
            int sch;
            cout<<"Enter Number : ";
            cin>>sch;
            temp=search_op(root,sch);
            if(temp==NULL)
            {
                cout<<" Not found "<<endl;
            }
            else
            {
                cout<<" Found "<<endl;
            }
        }
        if(n==6)
        {
            temp=Max(root);
            if (temp != NULL)
            {
               cout<<"Max is :"<<temp->data;
            }
            else
            {
                cout<<"tree is empty....."<<endl;
            }
        }
        if(n==7)
        {
            temp=Min(root);
            if (temp != NULL)
            {
                cout<<"Min is :"<<temp->data;
            }
            else
            {
                cout<<"Tree Is Empty"<<endl;
            }
        }
        if(n==8)
        {
            cout<<"EXIT"<<endl;
            break;
        }

    }
}

