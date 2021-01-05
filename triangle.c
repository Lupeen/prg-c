#include <stdio.h>
int main()
{
    int x = 10;
    for(int i = 0; i<x; i++)
    {
        for(int y=0; y<=i; y++)
        {
            printf("*");

        }
        printf("\n");
    }
    return 0;
}