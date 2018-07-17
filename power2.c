#include<stdio.h>
int main()
{
  int b,e,i,p=1;
  scanf("%d%d",&b,&e);
  for(i=1;i<=e;i++)
  {
     p=p*b;
  }
  printf("%d",p);
}
