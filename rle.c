#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char stringxd[200] = {};
    printf("Enter a string\n");
    scanf("%s", stringxd);
    printf("%s\n", stringxd);
    char *pismenoadresa = NULL;
    pismenoadresa = &stringxd;
    int pismenocount = 0;
    char predchozi = "š";
    for (int i = 0; i < strlen(stringxd); i++)
    {
        pismenocount++;
        if (*pismenoadresa != predchozi)
        {
            printf("%i%c", pismenocount, *pismenoadresa);
            predchozi = *pismenoadresa;
            pismenocount = 0;
        }
        pismenoadresa++;
    }
    return 0;
}