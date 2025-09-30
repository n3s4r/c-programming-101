#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Answer: %d\n", max(40, 20, 30));
    return 0;
}


int max(int num1, int num2, int num3)
{
    int result;

    if(num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }
    return result;
}
