#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d %d",&n,&x);
    for(i=n+1;i<x;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}
