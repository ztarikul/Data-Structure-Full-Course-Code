#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct node
{
    char data;
    struct node *next;
};

struct node *top=NULL, *curr, *temp;

void push(char p)
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

int main()
{
    string x;
    cout<<"Enter your Input : ";
    cin>>x;
    int l=x.length();
    cout<<endl;
    for(int i=0; i<l; i++)
    {
        if(x[i]=='(')
        {
            push('(');
        }
        else
        {
            if(x[i]==')')
            {
                if(top==NULL)
                {
                    cout<<"Opening Parenthesis is Missing !"<<endl;
                }
                else
                {
                    pop();
                }
            }
        }
    }
    if(top!=NULL)
    {
        cout<<"Closing Parenthesis is Missing !"<<endl;
    }
}
