#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int roll;
    float cgpa;

} student;

int main()
{
    student s1;
    printf("Enter your name: ");

    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter your roll no. : ");
    scanf("%d", &s1.roll);

    printf("Enter your CGPA: ");
    scanf("%f", &s1.cgpa);

    printf("\nName: %s\nRoll no. : %d\nCGPA: %.2f\n", s1.name, s1.roll, s1.cgpa);

    return 0;
}