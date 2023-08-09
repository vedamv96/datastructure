#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,key,size,find=0;
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the values for array:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value to search:");
    scanf("%d",&key);
    for(i=0;i<5;i++)
    {
        if(a[i]==key);
        find=1;
    }
    if(find==1)
    {
        printf("Value found");
    }
    else
    {
        printf("Value not found");
    }
}
