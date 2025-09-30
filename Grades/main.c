#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    printf("Enter your grade: ");
    scanf("%c", &grade);
    printf("\n");
    switch(grade){

case 'A':
    printf("You did great nigga\n");
    break;
case 'B':
    printf("You did good nigga\n");
    break;
case 'C':
    printf("You did okay nigga\n");
    break;
case 'D':
    printf("You did bad nigga\n");
    break;
case 'F':
    printf("You a dead nigga\n");
    break;
default:
    printf("Wrong input nigga\n");
    }
    return 0;
}


