#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main() {
    struct Node *head = NULL;
    struct Node *newnode,*secondnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = 10;
    newnode->next = NULL;
    head = newnode;
    secondnode = (struct Node*)malloc(sizeof(struct Node));
    secondnode->data = 20;
    secondnode->next = NULL;
    head->next = secondnode;
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
