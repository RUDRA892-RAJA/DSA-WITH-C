
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main() {
    struct Node *head = NULL;
    struct Node *newnode,*secondnode,*node1,*node2,*node3;
    node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->data = 30;
    node1->next = NULL;
    head = node1;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = 10;
    newnode->next = NULL;
    node1->next = newnode;
    node3 = (struct Node*)malloc(sizeof(struct Node));
    node3->data = 50;
    node3->next = NULL;
    newnode->next = node3;
    secondnode = (struct Node*)malloc(sizeof(struct Node));
    secondnode->data = 20;
    secondnode->next = NULL;
    node3->next = secondnode;
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
