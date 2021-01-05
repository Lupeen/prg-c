#include <stdio.h>
int rohlik(int a, int b, int c)
{
    int result = (a * b * c);
    return result;
}
int main()
{
    printf("%i", rohlik(11, 11, 11));
}
