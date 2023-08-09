#include <stdio.h>
#include <stdlib.h>

int main()
{
 int arr[100],i,j,k,n,incr;
 printf("Enter the value for n:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("\n Unsorted list is: \n");
 for(i=0;i<n;i++)
 printf(" %d",arr[i]);
 printf("\n Enter the increment:");
 scanf(" %d",&incr);
 while(incr>=1)
 {
 for(j=incr;j<n;j++)
 {
 k=arr[j];
 for(i=j-incr;(i>=0)&&(k<arr[i]);i=i-incr)
arr[i+incr]=arr[i];
arr[i+incr]=k;
 }
 printf("Increment = %d\n",incr);
 for(i=0;i<n;i++)
 printf(" %d",arr[i]);
 printf("\n");
 incr=incr-1;
 }
 printf(" Sorted list is: \n");
 for(i=0;i<n;i++)
 printf(" %d",arr[i]);
 printf("\n");
}
