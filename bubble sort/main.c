#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],i,j,temp,n;
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
 for(j=0;j<n-1;j++)
 {
 if(a[j]>a[j+1])
 {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
 }
 }

 }
 for(i=0;i<n;i++)
 printf("\n %d",a[i]);
}
