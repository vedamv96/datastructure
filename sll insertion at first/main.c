#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
};
struct node*head;
void main()
{
    int a,ch;
    do
    {
        printf("Enter the element to insert:");
        scanf("%d",&a);
        beginsert(a);
        printf("Press 0 to insert more");
        scanf("%d",&ch);
    }
    while (ch==0);
}
void beginsert(int a)
{
    struct node*ptr =(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("OVERFLOW");
    }
    else
    {
        ptr->data=a;
        ptr->next=head;
        head=ptr;
        printf("Node inserted");
    }
}
