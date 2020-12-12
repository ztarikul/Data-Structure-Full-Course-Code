#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL, *curr, *temp;

void push()
{
    int num;
    cout<<"\n How many Number : ";
    cin>>num;
    cout<<"\n Enter Element :\n";
    for(int i=0; i<num; i++)
    {
        curr=new node;
        cin>>curr->data;
        curr->next=NULL;
        if(top==NULL)
        {
            top=curr;
        }
        else
        {
            temp=top;
            top=curr;
            top->next=temp;
        }
    }
}
void display()
{
    cout<<endl<<endl;
    curr=top;
    while(curr!=NULL)
    {
        cout<<curr->data<<endl;
        curr=curr->next;
    }
}

void pop()
{
    temp=top;
    top=top->next;
    free(temp);
}

int main()
{
    push();
    pop();
    display();
}
