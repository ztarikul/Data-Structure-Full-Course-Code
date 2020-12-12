# include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *l;
    struct node *r;

};
struct node *root=NULL,*temp;
node *insert(node *tree,int key)
{
    if(tree == NULL)
    {
        tree=new node;
        tree->data=key;
        tree->l=NULL;
        tree->r=NULL;
    }
    else if( tree->data > key)
    {
        tree->l=insert(tree->l,key);
    }
    else
        tree->r=insert(tree->r,key);

    return tree;

};
void preorder(node *tree)

{
    if(tree != NULL)
    {

        cout<<tree->data<<' ';
        preorder(tree->l);
        preorder(tree->r);
    }
};
void postorder(node *tree)
{
    if(tree != NULL)
    {
        postorder (tree->l);

        postorder (tree->r);
        cout<<tree->data<<' ';
    }

};
void inorder(node *tree)
{
    if(tree != NULL)
    {
        inorder(tree->l);
        cout<<tree->data<<' ';
        inorder(tree->r);
    }
}
node *search(node *tree,int key)
{
    if(tree != NULL)
    {
        if(tree->data==key)

            return tree;

        else if(tree->data > key)
            return search(tree->l,key);
        else
            return search(tree->r,key);
    }

};
node  *max(node *tree)
{
    if(tree != NULL)
    {
        if(tree->r != NULL)
        {
            return max(tree->r);
        }
        else
            return tree;
    }
}
node *min(node *tree)
{
    if(tree != NULL)
    {
        if(tree->l!= NULL)
        {
            return min(tree->l);
        }
        else
            return tree;
    }
};
node *delete1(node *tree,int key)
{

    if(tree==NULL)
    {
        return tree;
    }
    else if(tree->data>key)
    {
        tree->l=delete1(tree->l,key);
    }
    else if(tree->data<key)
    {
        tree->r=delete1(tree->r,key);
    }

    else
    {
        if(tree->l==NULL || tree->r==NULL)
        {
            node *temp=tree;
            tree=NULL;
            free(temp);
            return tree;
        }

        else if(tree->l=NULL)
        {
            node *temp=tree;
            tree=tree->r;
            free(temp);
            return tree;
        }
        else if(tree->r=NULL)
        {
            node *temp=tree;
            tree=tree->l;
            free(temp);
            return tree;
        }
        else
        {
            node *temp=min(tree->r);
            tree->data=temp->data;
            tree->r=delete1(tree->r,temp->data);
            //return tree;
        }
        return tree;
    }



};
void exit()
{

};
int main()
{
    int n;
    do
    {

        cout<<endl;
        cout<<"1.insert tree:"<<endl;
        cout<<"2.pre order:"<<endl;
        cout<<"3.post order:"<<endl;
        cout<<"4.in oder:"<<endl;
        cout<<"5.search:"<<endl;
        cout<<"6.maximum:"<<endl;
        cout<<"7.minimum:"<<endl;
        cout<<"8.delete tree:"<<endl;
        cout<<"9.exit:"<<endl;

        cout<<"enter your choice:"<<endl;
        cin>>n;

        switch(n)
        {
        case 1:
        {
            int a;
            cout<<"enter a value:"<<endl;
            cin>>a;

            root=insert(root,a);
            break;
        }
        case 2:
        {
            preorder(root);
            break;

        }
        case 3:
        {
            postorder(root);
            break;
        }
        case 4:
        {
            inorder(root);
            break;
        }
        case 5:
        {
            int key;
            cin>>key;
            temp=search(root,key);
            if(temp==NULL)
            {
                cout<<" not found "<<endl;
            }
            else
                cout<<" found .... "<<endl;
            break;
        }
        case 6:
        {
            temp=max(root);
            if (temp != NULL)
                cout<<"max is :"<<temp->data;
            else
                cout<<"tree is empty....."<<endl;
            break;
        }
        case 7:
        {
            temp=min(root);
            if (temp != NULL)
                cout<<"min is :"<<temp->data;
            else
                cout<<"tree is empty....."<<endl;
            break;
        }
        case 8:
        {
            int b;
            cout<<"enter a value:"<<endl;
            cin>>b;
            root=delete1(root,b);
            break;
        }
        case 9:
        {
            exit();
            break;
        }
        default:
        {

        }


        }
    }
    while(n != 9);
}

