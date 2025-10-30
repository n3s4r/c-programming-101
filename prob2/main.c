#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;

    if(x == 5)
    {
        printf("x is 5  //using if\n\n");
    }

    int times = 1;
    while(x == 5 && times == 1)
    {
        printf("x is 5  //using while\n");
        times = 0;
    }
    return 0;
}





