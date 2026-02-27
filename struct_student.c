#include <stdio.h>
#include <string.h>

// Define structure for student
struct Student {
    char name[50];
    int roll;
    int age;
    float totalMarks;
};

int main() {

    // Create and initialize student records
    struct Student s1 = {"Nesar Ahmed", 101, 25, 450.5};
    struct Student s2 = {"Rahim Khan", 102, 24, 420.0};
    struct Student s3 = {"Karim Ali", 103, 23, 465.0};

    // Print student information
    printf("Student Information:\n\n");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Age: %d\n", s1.age);
    printf("Total Marks: %.2f\n\n", s1.totalMarks);

    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Age: %d\n", s2.age);
    printf("Total Marks: %.2f\n\n", s2.totalMarks);

    printf("Name: %s\n", s3.name);
    printf("Roll: %d\n", s3.roll);
    printf("Age: %d\n", s3.age);
    printf("Total Marks: %.2f\n\n", s3.totalMarks);

    return 0;
}
