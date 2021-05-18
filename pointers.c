#include <stdio.h>
#include <stdlib.h>
void pointers(int *pointer)
{
    printf("pointer");
}
int main()
{
    int array[6] = {0, 2, 4, 6, 8, 10};
    int *point = NULL;
    point = array;
    printf("%x\n", (point));
    printf("%i\n", *(point));
    printf("%x\n", (++point));
    printf("%i\n", *(point));
    printf("%x\n", (++point));
    printf("%i", (*point));
    pointers(point);
    return 0;
}
