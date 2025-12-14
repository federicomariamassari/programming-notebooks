/* Evaluates an expression in Reverse Polish Notation (RPN) */

#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char ch;
    int op1, op2;  /* Preserve operation order */
    make_empty();
    
    printf("Evaluate an RPN expression: ");
    
    while (true)
    {
        scanf(" %c", &ch);  /* As suggested by exercise */

        switch(ch)
        {
            case 'q':
                exit(EXIT_SUCCESS);
            
            case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                push(ch - '0');
                break;

            case '+':
                push(pop() + pop());
                break;

            case '-':
                op2 = pop();
                op1 = pop();
                push(op1 - op2);
                break;

            case '*':
                push(pop() * pop());
                break;

            case '/':
                op2 = pop();
                op1 = pop();
                push(op1 / op2);
                break;

            case '=':
                printf("Value of expression: %d\n", pop());
                make_empty();
                printf("Evaluate an RPN expression: ");
                break;

            default:
                break;
        }
    }
    
    return 0;
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
    
    return -1;
}

void stack_overflow(void)
{
    printf("Expression is too complex\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    printf("Not enough operands in expression\n");
    exit(EXIT_SUCCESS);
}
