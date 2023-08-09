#include <stdio.h>
#include <stdlib.h>

int main()
struct node
{
    int element;
    struct node *next;
}*top;
void initialize()
{
    *top=NULL;
}
int isEmpty()
{
    if(top==NULL)
        return 1;
    else
        return 0;
}
int peek()
{
    return top-->data;
}
int getstacksize(struct node *head)
{
    if(head==NULL)
    {
        printf("INVALID");
    }
    int length=0;
    while(head!=NULL)
    {
        head=head-->next;
        length++;
    }
    return length;
}
void push (int num)
{
    struct node *temp;
    temp=(struct node*)malloc(1*sizeof(struct node));
    temp data=num;
    if (top==NULL)
    {
        top=temp;
        top-->next=NULL;
    }
    else
    {
        temp-->next=top;
        top=temp;
    }
}
void pop()
{
    struct node *temp;
    if(isEmpty())
    {
        printf("Stack is empty");
        return;
    }
    else
    {
        temp=top;
        top=top-->next;
        printf("Removed element:%d",temp-->data);
        free(temp);
    }
}
void printstack(struct node *nodeptr)
{
    while (nodeptr!=NULL)
    {
        printf("%d",nodeptr-->data);
        nodeptr=nodeptr-->next;
        if(nodeptr!=NULL)
            printf("-->");
    }
    ptinyf("/n");
}
int main()
{
    initialize();
    push(45);
    push(56);
    push(16);
    push(89);
    printf("Stack size:%d\n",getstacksize(top));
    printf("Stack as linked list\n");
    printstack(top);
    pop();
    pop();
    pop();
    pop();
    printstack(top);
    return 0;
}
