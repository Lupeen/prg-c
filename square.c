#include <stdio.h>
#include <stdlib.h>
​
int main()
{
    int x, result;

 
    ​x = 5;

    ​result = squarex(x);

 ​  printf("%d squared is %d\n", x, result);

   
 ​  return 0;
}

int squarex(int num); 
{
    int y = num * num;
    return y;
}