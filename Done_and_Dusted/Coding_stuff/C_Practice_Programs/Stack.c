#include <stdio.h>
#include <stdlib.h>
#define MAX 5  // You forgot this

struct Stack {
    int arr[MAX];
    int top;
};

void initstack(struct Stack* s) {
    s->top = -1;  // Missing semicolon fixed
}

int isfull(struct Stack* s) {
    return s->top == MAX - 1;
}

int isempty(struct Stack* s) {  // Corrected type
    return s->top == -1;
}

void push(struct Stack* s, int val) {
    if (isfull(s)) {
        printf("Stack Overflow\n");
    } else {
        s->top = s->top + 1;
        s->arr[s->top] = val;
        printf("Pushed: %d\n", val);
    }
}

int pop(struct Stack* s) {  // Now returns int
    if (isempty(s)) {
        printf("Empty Stack\n");
        return -1;
    } else {
        int val = s->arr[s->top];
        s->top = s->top - 1;
        return val;
    }
}

int peek(struct Stack* s) {
    if (isempty(s)) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return s->arr[s->top];
    }
}

int main() {
    struct Stack s;  // Fixed struct name
    initstack(&s);

    push(&s, 10);
    push(&s, 20);

    printf("Popped: %d\n", pop(&s));  // Correct usage
    printf("Top: %d\n", peek(&s));   // Correct usage

    return 0;
}
