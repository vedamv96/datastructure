#include <stdio.h>
#include <stdlib.h>

void heapsort(int a[],int n);
void heapify(int a[],int n);
void adjust(int a[],int n,int i);
int a[100],n,i,j;
void main()
{
    printf("\n Enter the value of n:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=1;i<=n;i++)
    scanf("%d",&a[i]);
    heapsort(a,n);
    printf("\n The sorted list is:");
    for(i=1;i<=n;i++)
    printf("\n %d",a[i]);
    getch();
}
void heapsort(int a[],int n)
{
    int t;
    heapify(a,n);
    for(i=n;i>=2;i--)
    {
        t=a[i];
        a[i]=a[1];
        a[1]=t;
        adjust(a,1,i-1);
    }
}
void heapify(int a[],int n)
{
    for(i=(n/2);i>=1;i--)
    adjust(a,i,n);
}
void adjust(int a[],int i,int n)
{
    int item;
    j=2*i;
    item=a[i];
    while(j<=n)
    {
        if((j<n)&&(a[j]<a[j+1]))
        j=j+1;
        if(item>=a[j])
        break;
        a[j/2]=a[j];
        j=2*j;
    }
    a[j/2]=item;
}
