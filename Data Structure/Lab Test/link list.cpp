#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL, *curr, *tail, *temp, *temp1;
void inser_t()
{
    int num;
    cout<<"How many Number :";
    cin>>num;
    cout<<"Enter Number"<<endl;
    for(int i=0; i<num; i++)
    {
        curr=(node*)malloc(sizeof(node));
        cin>>curr->data;
        curr->next=NULL;
        if(head==NULL)
        {
            head=curr;
            tail=curr;
        }
        else
        {
            tail->next=curr;
            tail=curr;
        }
    }
}

void ins_at_first()
{
    temp=head;
    cout<<"\n Enter New Element : ";
    curr=new node;
    cin>>curr->data;
    curr->next=NULL;
    head=curr;
    curr->next=temp;
}

void ins_at_any_Pos()
{
    temp=head;
    cout<<"\n Enter Position : ";
    int pos;
    cin>>pos;
    curr=new node;
    cout<<"\n Enter New Element ; ";
    cin>>curr->data;
    curr->next=NULL;
    for(int i=1; i<pos; i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=curr;
    curr->next=temp;
}

void ins_last()
{
    temp=head;
    cout<<"\n Enter New Element  : ";
    curr=new node;
    cin>>curr->data;
    curr->next=NULL;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp->next=curr;
}

void del_from_beg()
{
    temp=head;
    head=temp->next;
    free(temp);
    cout<<"\n Deleted . . . . . \n\n";
}
void del_from_any_pos()
{
    temp=head;
    cout<<"\n Enter Position : ";
    int pos;
    cin>>pos;
    if(pos==1)
    {
        head=temp->next;
        free(temp);
    }
    else
    {
        for(int i=1; i<pos; i++)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=temp->next;
        free(temp);
    }
    cout<<"\n Deleted . . . . . \n\n";
}

void del_from_last()
{
    temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    free(temp);
    temp1->next=NULL;
    cout<<"\n Deleted . . . . . \n\n";
}

void display()
{
    cout<<endl;
    curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void menu()
{
    while(1)
    {
        cout<<endl<<endl;
        cout<<" 1. Insertion"<<endl;
        cout<<" 2. Display"<<endl;
        cout<<" 3. Insert at Beginning "<<endl;
        cout<<" 4. Insert at any Position "<<endl;
        cout<<" 5. Insert at Last Position "<<endl;
        cout<<" 6. Delete from Beginning "<<endl;
        cout<<" 7. Delete from any Position "<<endl;
        cout<<" 8. Delete from Last "<<endl;
        cout<<" 0. Exit"<<endl;
        int n;
        cout<<"\n Choice : ";
        cin>>n;
        if(n==1)
        {
            inser_t();
        }
        if(n==2)
        {
            display();
        }
        if(n==0)
        {
            break;
        }
        if(n==3)
        {
            ins_at_first();
        }
        if(n==4)
        {
            ins_at_any_Pos();
        }
        if(n==5)
        {
            ins_last();
        }
        if(n==6)
        {
            del_from_beg();
        }
        if(n==7)
        {
            del_from_any_pos();
        }
        if(n==8)
        {
            del_from_last();
        }
    }
}

int main()
{
    menu();
    return 0;
}
