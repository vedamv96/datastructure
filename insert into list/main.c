#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[100],n,i,num,loc,m;
 printf("Enter the value for n:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the value to insert:");
 scanf("%d",&m);
 printf("enter the option: \n 1. at beginning \n 2. at any position \n 3. at end\n");
 scanf("%d",&num);
 switch(num)
 {
 case 1:
 loc=0;
 for(i=n;i>=loc;i--)
 {
 a[i]=a[i-1];
 }
 a[loc]=m;
 n++;
 printf("the new list is: ");
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
 break;
 case 2:
 printf("enter the location");
 scanf("%d",&loc);
 for(i=n;i>=loc;i--)
 {
 a[i]=a[i-1];
 }
 a[loc]=m;
 n++;
 printf("the new list is: ");
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
 break;
 case 3:
 loc=n;
 for(i=n;i>=loc;i--)
 {
 a[i]=a[i-1];
 }
 a[loc]=m;
 n++;
 printf("the new list is: ");
 for(i=0;i<n;i++)
 {
 printf("%d\n",a[i]);
 }
 }
}
