#include <stdio.h>
#include <stdlib.h>

//Testing Functions
double cubicFunction(double number);
int main()
{
    testFunction(25);
    printf("Answer: %.2f\n", cubicFunction(7.0));
    return 0;
}

void testFunction(int age[])
{
    printf("Hello nigga, you are %d years old.\n\n", age);
}

double cubicFunction(double number)
{
    double result = number * number * number;
    return result;
}
