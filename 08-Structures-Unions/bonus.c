#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int marks;
} stud;

void printStudent(stud s)
{
    printf("Name: %s, Marks: %d\n", s.name, s.marks);
}

void addBonus(stud *s, int bonus)
{
    s->marks += bonus;
}

int main()
{
    stud s;
    strncpy(s.name, "Huzaif", sizeof(s.name) - 1);
    s.name[(sizeof(s.name) - 1)] = '\0';

    s.marks = 70;

    printStudent(s);

    addBonus(&s, 5);

    printStudent(s);

    return 0;
}