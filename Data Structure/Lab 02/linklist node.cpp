#include<iostream>
#include<cstdlib>
using namespace std;
struct node
{
    int x;
    struct node *next;
};

struct node *head=NULL, *temp, *curr, *tail;

void insert_atbeg()
{
    curr=(node*)malloc(sizeof(node));
    cout<<endl;
    cin>>curr->x;

    curr->next=NULL;
    temp=head;
    head=curr;
    curr->next=temp;
}

 void display()
    {
        //struct node *curr;
        curr= head;
        cout<<endl;
        while(curr!=NULL)
        {
            cout<<curr->x;
            curr=curr->next;
        }
    }
int main()
{
    //node *curr, *tail;
    head=NULL;
    for(int i=0; i<3; i++)
    {
        curr=(node*)malloc(sizeof(node));
        cin>>curr->x;
        curr->next=NULL;
        if(head==NULL)
        {
            head=curr;
            temp=head;
            tail=curr;
        }
        else
        {
            tail->next=curr;
            tail=tail->next;
        }
    }
    display();
    insert_atbeg();
    display();

}

