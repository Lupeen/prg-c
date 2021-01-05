#include <stdio.h>
int main()
{
    int x;
    while (x++)
    {
        for(x=1; x<200; x++)
        {
            if((x*x) % 11 == 0)
            {
                printf("%i", x);
                if(x > 1000000):
                {
                    break;
                }
            }
        }
    }
    
}