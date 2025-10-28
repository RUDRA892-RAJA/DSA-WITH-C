// Online C compiler to run C program online
#include <stdio.h>
int max = 5;
int stack[5];
int top = -1;
void push(int item){
    if(top == max-1){
        printf("the stack is ovrflow");
    }
    else{
        top++;
        stack[top] = item;
    }
}
void pop(){
    if(top == -1){
        printf("the stack is underflow");
    }
    else{
        int item = stack[top];
        top--;
        printf("the element poped is %d",item);
    }
}
void peek(){
    if(top == -1){
        printf("the stack is underflow");
    }
    else{
        printf("the top most elememt is  %d",stack[top]);
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    peek();
    return 0;
}
