#include <stdio.h>
int main()
{
  int n1, n2, i, t, n, rem;
  scanf("%d %d",&n1,&n2);
  for(i=n1+1;i<n2;i++)
  {
      t=i;
      n=0;
      while(t!=0)
      {
          rem=t%10;
          n+=rem*rem*rem;
          t=t/10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
