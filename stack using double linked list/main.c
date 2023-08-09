#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*next;
    struct node*prev;
}*start=NULL,
 *top=NULL;
void push(int);
void pop();
void display();
int main()
{
    int value;
    int choice;
    while(1)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the value to insert:");
            scanf("%d",&value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("INVALID");
        }
    }
}
int isEmpty()
{

    if (start == NULL)
        return 1;
    return 0;

}

void push(int value)
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    temp->data=value;
    if(isEmpty())
    {
        temp->next=NULL;
        temp->prev=NULL;
        top=temp;
        start=temp;
    }
    else
    {
        top->next =temp;
        top->prev = NULL;
        temp->next=NULL;
        top=temp;
    }
}
void pop()
 {
     struct node*temp;
     temp=top;
     if(isEmpty())
     {
         printf("EMPTY STACK");
     }
     else if(top==start)
     {
         top =NULL;
         start = NULL;
         free(temp);
     }
     else
     {
        top->prev=NULL;
        top->next=NULL;
        top=temp->prev;
        free(temp);
     }
     printf("item popped");
 }
 void display()
 {
     struct node*temp;
     temp=start;
     if(isEmpty())
     {
         printf("EMPTY STACK");
     }
     else
     {
         printf("\nThe stack is:");
         while(temp!=NULL)
         {
             printf("%d",temp->data);
             temp=temp->next;
         }
     }
 }


