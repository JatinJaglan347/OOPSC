#include <stdio.h>
#include <stdlib.h>

struct Stack {
    int index;
    int size;
    int *arr;
};

void setSize(struct Stack stack, int n) {
    if (n > 10 && n > stack.size) {
        int *arr_t = stack.arr;
        stack.arr = (int *) malloc(n * sizeof(int));
        for (int i = 0; i < stack.size; i++) {
            stack.arr[i] = arr_t[i];
        }
        stack.size = n;
        free(arr_t);
    } else if (stack.size < 10) {
        int *arr_t = stack.arr;
        stack.arr = (int *) malloc(10 * sizeof(int));
        for (int i = 0; i < stack.size; i++) {
            stack.arr[i] = arr_t[i];
        }
        stack.size = 10;
        free(arr_t);
    }
}

int empty(struct Stack stack) {
    if (stack.index == -1) return 1;
    return 0;
}

void push(struct Stack stack, int n) {
        printf("%d %d\n", stack.index, stack.size-1);
    if (stack.index < stack.size-1) {
        stack.index++;
        stack.arr[stack.index] = n;
    }
}

int peek(struct Stack stack) {
    if (!empty(stack)) {
        int res = stack.arr[stack.index];
        return res;
    }
    return -1;
}

int pop(struct Stack stack) {
    if (!empty(stack)) {
        int res = stack.arr[stack.index];
        stack.index--;
        return res;
    }
    return -1;
}
