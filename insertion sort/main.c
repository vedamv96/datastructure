#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[200],n,i,j,item;
 printf("Enter the value of n:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\n\n Sorted List");
 for(j=1;j<n;j++)
 {
 item=a[j];
 i=j-1;
 while((i>=0)&&(item<a[i]))
 {
 a[i+1]=a[i];
 i=i-1;
 }
 a[i+1]=item;
 }
 for(i=0;i<n;i++)
 {
 printf("\n %d",a[i]);
 }
}
