#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int x) {
    if (isFull()) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
    printf("%d pushed into stack\n", x);
}

int pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        return -1;  
    }
    return stack[top--];
}

int main() {
    push(10);
    push(20);
    printf("%d popped from stack\n", pop());
    printf("%d popped from stack\n", pop());
    printf("%d popped from stack\n", pop());  // Underflow case

    return 0;
}
