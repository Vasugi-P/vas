#include<stdio.h>
int main()
{
int a[10],i,x,z,s=0;
scanf("%d%d",&x,&z);
for(i=1;i<=x;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<=z;i++)
{
s=s+i;
}
printf("%d",s);
}
