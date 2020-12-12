#include <stdio.h>
#include <string.h>
#include "stack.h"

int main()
{

    int i;
    char postfix[POSTFIXSIZE];
    printf("Four operators(*, /, +, -) in an expression and operand is single digit only.\n");   #Input example -> 6523+8*+3+*
    printf(" \nEnter postfix expression,\npress right parenthesis ')' for end expression : ");

    for (i = 0; i <= POSTFIXSIZE - 1; i++) {
        scanf("%c", &postfix[i]);

        if (postfix[i] == ')')
        {
            break;
        } 
    }

    EvalPostfix(postfix);

    return 0;
}

