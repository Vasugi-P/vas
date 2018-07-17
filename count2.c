#include<stdio.h>
int main()
{
 int n,k,a[10],i;
 int sum=0;
 scanf("%d %d",&n,&k);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(a[i]=0;a[i]<k;a[i]++)
 {
 sum=sum+a[i];
 }
 for(i=0;i<n;i++)
 {
 printf("%d",sum);
 }
}
