#include <stdbool.h>  /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 10

int contents[STACK_SIZE];
int top = 0;
bool stack_underflow_called = false;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    char c;
    int n_parentheses = 0;
    int n_braces = 0;

    make_empty();

    printf("Enter parentheses and/or braces: ");
    while((c = getchar()) != '\n')
    {
        switch(c)
        {
            case('('):
                push(c);
                n_parentheses++;
                break;
            case('{'):
                push(c);
                n_braces++;
                break;
            case(')'):
                pop();
                n_parentheses--;
                break;
            case('}'):
                pop();
                n_braces--;
                break;
            default:
                break;
        }
    }

    if (is_empty() && n_parentheses == 0 && n_braces == 0)
        printf("Parentheses/braces are nested properly\n");
    else if (!is_empty() || is_full() || stack_underflow_called)
        printf("Parentheses/braces are not nested properly\n");

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
    printf("Stack overflow\n");
    exit(EXIT_SUCCESS);
}

void stack_underflow(void)
{
    stack_underflow_called = true;
}
