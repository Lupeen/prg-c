#include <stdio.h>
#include <math.h>
int i = 0;
int main()
{
    for(i=1.; i<100;i++){
        int result = ((i*i) + i);
        printf("-_%i_-", result);
    }
}