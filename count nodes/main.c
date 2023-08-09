#include <stdio.h>
#include <stdlib.h>

struct Node {
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
int countNodes(struct Node* head)
{
     int count = 0;
     struct Node* current = head;
     while (current != NULL)
     {
         count++;
         current = current->next;
     }
     return count;
}
void displayList(struct Node* head)
 {
     struct Node* temp = head;
     while (temp != NULL) {
     printf("%d ", temp->data);
     temp = temp->next;
 }
     printf("\n");
}
int main()
{
     struct Node* head = NULL;
     insertNode(&head,45);
     insertNode(&head,77);
     insertNode(&head,23);
     insertNode(&head,19);
     insertNode(&head,62);
     printf("List: ");
     displayList(head);
     int nodeCount = countNodes(head);
     printf("Number of nodes in the list: %d\n", nodeCount);
     return 0;
}
