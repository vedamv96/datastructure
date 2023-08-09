#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[100],i,j,k,min,n;
 printf("Enter the value for n:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
 }
 printf("\n Sorted List");
 for(i=0;i<n;i++)
 {
 k=i;
 min=a[i];
 for(j=i+1;j<n;j++)
 {
 if(a[j]<min)
 {
min=a[j];
k=j;
 }
 }
 a[k]=a[i];
 a[i]=min;
 printf("\n %d",a[i]);
 }
 //getch();
 //return 0;
}
