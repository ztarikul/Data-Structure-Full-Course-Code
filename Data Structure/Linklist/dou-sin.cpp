#include<bits/stdc++.h>
using namespace std;

struct node
{
    char name;
    int mark;
    struct node  *next;
    struct node *pre;
};

struct node *head=NULL, *curr, *tail, *head2=NULL, *curr2, *tail2, *temp;

void Insert()
{
    for(int i=0; i<5; i++)
    {
        curr=(node*)malloc(sizeof(node));
        cout<<"Enter a name\n";
        cin>>curr->name;
        curr->next=NULL;
        curr->pre=NULL;
        if(head==NULL)
        {
            head=curr;
            tail=curr;
        }
        else
        {
            tail->next=curr;
           // curr->pre=tail;
            tail=tail->next;
        }
    }
}

void Inser_Single()
{
    temp=head;
    while(temp!=NULL)
    {
          curr2=new node;
          cout<<"Enter Marks : \n";
          cin>>curr2->mark;
          curr2->next=NULL;
          if(head2==NULL)
          {
              head2=curr2;
              tail2=curr2;
          }
          else
          {
              tail2->next=curr2;
              tail2=tail2->next;
          }
          temp->next=head2;
         temp=temp->pre;
    }

}

void display()
{
    curr=head;
    while(curr!=NULL)
    {
        cout<<endl;
        cout<<curr->name;
        cout<<curr2->mark;
        curr=curr->pre;
        cu
    }
}

int main()
{
    Insert();
    //Inser_Single();
    display();
}
