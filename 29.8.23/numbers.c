#include <stdio.h>
#include "stack.h"

int main() {
    struct Stack stack;
    stack.index = -1;
    stack.size = 0;
    setSize(stack, 10);
    push(stack, 10);
    push(stack, 11);
    printf("%d\n", empty(stack));
    printf("%d\n", peek(stack));
}
