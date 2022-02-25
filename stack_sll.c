/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}stack;

void push(stack **top_arg, int data)
{
    stack *new = (stack *)malloc(sizeof(stack));
    if(new == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        new->data = data;
        new->link = NULL;
        if(*top_arg == NULL)
        {
            *top_arg = new;
        }
        else
        {
            new->link = *top_arg;
            *top_arg = new;
        }
        printf("Inserted element is %d\n", new->data);
    }
}

int peek(stack **top_arg)
{
    stack *temp = *top_arg;
    return temp->data;
}

void pop(stack **top_arg)
{
    if(*top_arg == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        stack *temp = *top_arg;
        *top_arg = temp->link;
        printf("Deleted element is %d\n", temp->data);
        free(temp);
    }
}

void display(stack **top_arg)
{
    if(*top_arg == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        stack *temp = *top_arg;
        printf("Stack elements are: ");
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int main()
{
    stack *top = NULL;
    push(&top, 10);
    push(&top, 20);
    push(&top, 30);
    int ret = peek(&top);
    printf("The topmost element is: %d\n", ret);
    display(&top);
    pop(&top);
    pop(&top);
    pop(&top);

    return 0;
}
