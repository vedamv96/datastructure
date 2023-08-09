#include <stdio.h>
#include <stdlib.h>

struct Node {
 int data;
 struct Node* next;
};
struct Node* createNode(int data) {
 struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 newNode->data = data;
 newNode->next = NULL;
 return newNode;
}
void insertNode(struct Node** head, int data) {
 struct Node* newNode = createNode(data);
 newNode->next = *head;
 *head = newNode;
}
int searchKey(struct Node* head, int key) {
 struct Node* current = head;
 int position = 0;
 while (current != NULL) {
 if (current->data == key)
 return position;
 current = current->next;
 position++;
 }
 return -1;
}
void displayList(struct Node* head) {
 struct Node* temp = head;
 while (temp != NULL) {
 printf("%d ", temp->data);
 temp = temp->next;
 }
 printf("\n");
}
int main() {
 struct Node* head = NULL;
 insertNode(&head, 34);
 insertNode(&head, 78);
 insertNode(&head, 89);
 insertNode(&head, 92);
 insertNode(&head, 25);
 printf("List: ");
 displayList(head);
 int key;
 printf("Enter the key element to search: ");
 scanf("%d", &key);
 int position = searchKey(head, key);
 if (position == -1)
 printf("Element not found in the list.\n");
 else
 printf("Element found at position %d.\n", position);
 return 0;
}
