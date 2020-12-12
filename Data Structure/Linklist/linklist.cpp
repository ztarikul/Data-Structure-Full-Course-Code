#include<bits/stdc++.h>
using namespace std;

struct node
{
    int x;
    struct node *next;
};
 struct node *head=NULL, *curr, *tail, *temp, *temp1, *temp2, *Delete, *pre;
 ///-----------For Insert Data------------
 void Insert()
 {
     int num;
     cout<<"How many Number : ";
     cin>>num;
     for(int i=0;i<num; i++)
     {
         curr=(node*)malloc(sizeof(node));
         cin>>curr->x;
         curr->next=NULL;
         if(head==NULL)
         {
             head=curr;
             tail=curr;
         }
         else
         {
            tail->next=curr;
            tail=tail->next;
         }
     }
 }
///------For Display----------
 void display()
 {
     curr=head;
     while(curr!=NULL)
     {
         cout<<curr->x<<" ";
         curr=curr->next;
     }
 }
///-------- Insert at Beginning--------
 void Inser_at_beg()
 {
     curr=(node*)malloc(sizeof(node));
     cout<<endl;
     cin>>curr->x;
     curr->next=NULL;
     temp=head;
     head=curr;
     curr->next=temp;
}
///------- Insert at any position---------
void Ins_at_any_pos()
{
    int pos;
    temp=head;
    cout<<"Input The Position :";
    cin>>pos;
    curr=(node*)malloc(sizeof(node));
    cout<<endl;
    cin>>curr->x;
    for(int i=1; i<pos; i++)
    {
        temp1=temp;                  ///1st element
        temp=temp->next;        ///2nd element
    }

    temp1->next=curr;
    curr->next=temp;
}
///-------Delete from beginning-----------
void del_from_beg()
{
    temp1=head;
    head=temp1->next;
    free(temp1);
}
///-------- Delete from last position -------
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
}
///------- Delete from any position-------
void del_at_any_pos()
{
    int pos;
    temp=head;
    cout<<"Enter Position : ";
    cin>>pos;
    for(int i=1; i<pos; i++)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=temp->next;
    free(temp);
}
///--------- Delete all Negative data ---------
void del_negative()
{
    temp=head;
    while(temp!=NULL)
    {
        if(temp->x<0)
        {
            temp1->next=temp->next;
            Delete=temp;
            free(temp);
        }
        else
        {
            temp1=temp;
            temp=temp->next;
        }
    }

}

///-------- Reverse data ---------

/// ------ delete same data------
void del_same()
{
    temp=head;
    while(temp!=NULL)
    {
        temp1=temp->next;
        while(temp1!=NULL)
        {
            if(temp->x==temp1->x)
            {
                pre=temp1;
                Delete=temp1;
                pre->next=temp1->next;
                free(Delete);
                temp1=temp1->next;
            }
            else
            {
                pre=temp1;
                temp1=temp1->next;
            }
            temp=temp->next;
        }
    }
}

///-------MAIN-----------
 int main()
 {
    Insert();
    // Inser_at_beg();
    //Ins_at_any_pos();
   //del_from_beg();
    //del_from_last();
    //del_at_any_pos();
    del_negative();
    //del_same();
    display();
 }
