
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main() {
    struct Node *head = NULL;
    struct Node *newnode,*secondnode,*node1,*node2;
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 30;
    node1->next = NULL;
    head = node1;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = 10;
    newnode->next = NULL;
    node1->next = newnode;
    secondnode = (struct Node*)malloc(sizeof(struct Node));
    secondnode->data = 20;
    secondnode->next = NULL;
    newnode->next = secondnode;
    node2 = (struct Node*)malloc(sizeof(struct Node));
    node2->data = 40;
    node2->next = NULL;
    secondnode->next = node2;
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
