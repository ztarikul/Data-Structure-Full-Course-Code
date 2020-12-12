#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL, *curr, *tail, *temp, *temp1, *temp2, *temp3, *p;
int num;
void inser_t()
{
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

void pos_delete()
{
    temp=head;
    p=head;
    int c=1;
    for(int i=0; i<num-2; i++)
    {
    for(int j=0; j<2; j++)
    {
        //for(int i=0; i<2; i++)
        //{
            temp1=temp;
            temp2=temp;
            temp2=temp->next;
            temp3=temp2->next;
           // temp=temp->next;
        }
       if(c==1)
       {
            if(temp1->data>0)
            {
                if(temp2->data<0&&temp3->data<0)
                {
                    head=temp1->next;
                    free(temp1);
                    //temp=temp->next;
                }
            }
       }

       if(c!=0)
       {

            if(temp1->data>0)
            {
                if(temp2->data<0&&temp3->data<0)
                {
                    for(int i=1; i<c; i++)
                    {
                        temp1=p;
                        p=p->next;
                    }
                    temp1->next=p->next;
                    free(p);  ///temp
                    //temp=temp->next;
                }
            }
       }

       c++;
        temp=temp->next;
    }
  cout<<endl;

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

int main()
{
    inser_t();
    pos_delete();
    display();
}
