#include <stdio.h>
#include <stdlib.h>

//Struct

struct Student
{
    char name[50];
    char major[50];
    int age;
    double cgpa;
};

int main()
{
    struct Student student1;
    student1.age = 25;
    student1.cgpa = 2.75;

    strcpy( student1.name, "Tashin Mahmud");
    strcpy( student1.major, "Computer Science");

    printf("%s  %s  %d  %.2lf", student1.name,
    student1.major, student1.age, student1.cgpa);



    return 0;
}

