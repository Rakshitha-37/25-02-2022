#include <stdio.h>
#define SIZE 10

void print(int num)
{
    if(num < 10)
    {
        print(++num);
        printf("%d ", num);
    }
}
int main()
{
    static int num = 0;
    print(num);

    return 0;
}

