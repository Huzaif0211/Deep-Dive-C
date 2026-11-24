#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float cgpa;
};

int main()
{
    struct student s1 = {"Huzaif", 12, 8.5};

    printf("Your name is: %s\n", s1.name);
    printf("Your roll no. is: %d\n", s1.roll);
    printf("Your cgpa is: %.2f\n", s1.cgpa);

    return 0;
}