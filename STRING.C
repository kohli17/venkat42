include<stdio.h>
int main()
{
    int r=0,i,n=4;
    char str={123};
    char str1={"abc"};
    for(i=0;i<=n;i++)
    {
        r=str;
    }
    if(r)
    {
        printf("numeric yes\n");
        
    }
    else
    {
        printf("not numeric no\n");
    }
    for(i=0;i<=n;i++)
    {
        r=str1;
    }
    if(r)
    {
        printf(" not numeric yes\n");
    }
    else
    {
        printf(" numeric no\n");
    }
    return 0;
    
}
