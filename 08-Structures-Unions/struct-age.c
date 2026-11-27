#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

typedef struct person
{
    char name[50];
    date dob;
} person;

int isOlder(person a, person b)
{
    if (a.dob.year < b.dob.year)
    {
        return 1;
    }

    else if (a.dob.year > b.dob.year)
    {
        return 0;
    }

    else if (a.dob.month < b.dob.month)
    {
        return 1;
    }

    else if (a.dob.month > b.dob.month)
    {
        return 0;
    }

    else if (a.dob.day < b.dob.day)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    person p1, p2;

    printf("Enter name of first person: ");
    scanf("%49s", p1.name);

    printf("Enter DOB in DD MM YYYY format: ");
    scanf("%d %d %d", &p1.dob.day, &p1.dob.month, &p1.dob.year);

    printf("Enter name of second person: ");
    scanf("%49s", p2.name);

    printf("Enter DOB in DD MM YYYY format: ");
    scanf("%d %d %d", &p2.dob.day, &p2.dob.month, &p2.dob.year);

    if (isOlder(p1, p2))
    {
        printf("\nOlder person is: %s. ", p1.name);
    }
    else
    {
        printf("\nOlder person is: %s. ", p2.name);
    }

    return 0;
}