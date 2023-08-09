#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=-1,stack_arr[MAX];
push()
{
    int pushelement;
    if(front==(MAX-1))
    printf(" Stack Overflow.");
    else
    {
    printf(" Enter the element to be pushed : ");
    scanf("%d",&pushelement);
    front++;
    stack_arr[front]=pushelement;
    }
}
pop()
{
    if(front==-1)
    printf(" Stack Underflow.");
    else
    {
    printf(" Item %d is deleted from the stack.",stack_arr[front]);
    front--;
    }
}
display()
{
    int i;
    if(front==-1)
    printf(" Stack Empty.");
    else
    {
    printf("Elements in stack:");
    for(i=front;i>=0;i--)
    printf("\n %d ",stack_arr[i]);
    }
}
void main()
{
    int ch;
    while(1)
    {
        printf("\n SELECT:\n");
        printf(" 1. Push \n ");
        printf(" 2. Pop \n ");
        printf(" 3. Display \n ");
        printf(" 4. Exit \n ");
        printf("\n Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("\n Choose the correct one:");
        }
    }
}
