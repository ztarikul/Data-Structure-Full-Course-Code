#include<iostream>
#include<cstring>
using namespace std;

char palindrome(char str[], int x, int e)
{
    if(x==e)
    {
        return 1;
    }
    else if(str[x]!=str[e])
    {
        return 0;
    }
    else if(x<e+1)
    {
        return palindrome(str, x+1, e-1);
    }
}

int main()
{
    char str[]="MADAM";
    int l=strlen(str);
    int palin= palindrome(str, 0, l-1);
    if(palin==1)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
}
