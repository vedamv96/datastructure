#include <stdio.h>
#include <stdlib.h>

struct Node
{
     int data;
     struct Node* next;
};
struct Node* createNode(int data)
 {
     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
     newNode->data = data;
     newNode->next = NULL;
     return newNode;
}
void insertNode(struct Node** head, int data)
{
     struct Node* newNode = createNode(data);
     newNode->next = *head;
     *head = newNode;
}
void deleteNode(struct Node** head, int position)
{
     if (*head == NULL)
     return;
     struct Node* temp = *head;
     if (position == 0)
     {
         *head = temp->next;
         free(temp);
         return;
     }
     for (int i = 0; temp != NULL && i < position - 1; i++)
     temp = temp->next;
     if (temp == NULL || temp->next == NULL)
     return;
     struct Node* nextNode = temp->next->next;
     free(temp->next);
     temp->next = nextNode;
}
void displayList(struct Node* head)
{
     struct Node* temp = head;
     while (temp != NULL)
     {
         printf("%d ", temp->data);
         temp = temp->next;
     }
     printf("\n");
}
int main()
{
     struct Node* head = NULL;
     insertNode(&head, 32);
     insertNode(&head, 87);
     insertNode(&head, 64);
     insertNode(&head, 90);
     insertNode(&head, 49);
     printf("Initial list: ");
     displayList(head);
     int position;
     printf("Enter the position  to delete: ");
     scanf("%d", &position);
     deleteNode(&head, position);
     printf("List after deleting node: ", position);
     displayList(head);
     return 0;
}
