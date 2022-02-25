/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>

#define SIZE 5

void scan_element(int **arr_arg)
{
    printf("Enter array elements: ");
    for(int i = 0;i < SIZE;i++)
    {
        scanf("%d", *arr_arg+i);
    }
}
void print(int **arr_arg)
{
    for(int i = 0;i < SIZE;i++)
    {
        printf("%d ", *(*arr_arg+i));
    }
    printf("\n");
}
int main()
{
    int *arr = (int *)malloc(sizeof(int) * SIZE);
    scan_element(&arr);
    print(&arr);
}

