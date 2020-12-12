#include<stdio.h>
int main()
{
    char a[100], *p;
    int i,c;
    printf("Please Input some character\n");
    gets(a);
    p=a;
    c=0;
    for(i=0;*(p+i)!='\0';i++)
        {
            c++;
        }
    for(i=c-1;i>=0;i--)
    {
        printf("%c",*(p+i));
    }
    return 0;
}
