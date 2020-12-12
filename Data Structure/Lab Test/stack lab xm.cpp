#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top=NULL, *curr, *temp;

void push(int p)
{
    curr=(node*)malloc(sizeof(node));
    curr->data=p;
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
void pop()
{
    temp=top;
    top=top->next;
    free(temp);
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

void cheak()
{
    int x[100];
    int c=0;
    cout<<"Enter your Input : "<<endl;
    for(int i=0; i<10; i++)
    {
      cin>>x[i];
      if(x[i]>=0)
      {
          push(x[i]);
      }
      else
      {
          if(top!=NULL&&c>=5)
          {
              for(int j=0; j<5; j++)
              {
                  pop();
              }
          }
      }
      c++;
    }
}
int main()
{
    cheak();
    display();
}


