#include <stdio.h>
#include <string.h>
#include "balance_exp.h"

#Initially have top index set to -1

void initialize() {
 stacks.top = -1;
}

#To check if stack is Full or not

int isFull() {
    if(stacks.top >= MAXSIZE-1)
        return TRUE;
    else
        return FALSE;
}

#To check if stack is empty or not

int isEmpty() {
 if(stacks.top == -1)
     return TRUE;
 else
     return FALSE;
}

#To Push items to stack

void push(int num) {
    if (isFull())
        printf("Stack is Full...\n");
    else {
        stacks.array[stacks.top + 1] = num;
        stacks.top++;
    }
}

#To pop items from stack if we have ("}", ")", "]")

int pop() {
    if (isEmpty())
        printf("Stack is Empty...\n");
    else {
     stacks.top = stacks.top - 1;
        return stacks.array[stacks.top+1];
    }
}
