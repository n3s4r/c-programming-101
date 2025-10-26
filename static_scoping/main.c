//Concept of static scoping in C

#include <stdio.h>
#include <stdlib.h>

int x = 10; //global variable

int main()
{
    int x = 5;  //local variable

    printf("The value of local x is %d\n", x);
    test(); //calling test function to print global variable

    return 0;
}

void test()
{
    printf("The value of global x is %d\n", x); //x should get value 10
}
