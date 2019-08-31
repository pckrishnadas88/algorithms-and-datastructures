// https://www.youtube.com/watch?v=cAZ8CyDY56s&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&index=6
// Linked List in C/C++ - Inserting a node at beginning
#include <stdio.h>
#include<stdlib.h>

typedef struct Node
{
    /* data */
    int data;
    struct Node* next;   
    
}Node;
struct Node* head;
void Insert(int x) {
    Node* temp = (Node*) malloc(sizeof(Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void Print() {
    Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}
int main(void) {
   head = NULL;
   printf("How many numbers?\n"); 
   int n, i, x;
   scanf("%d", &n);
   for (i = 0; i < n; i++)
   {
       printf("Enter the number?\n");
       scanf("%d", &x);
       Insert(x);
       Print();
   }
   
   return 0;
}