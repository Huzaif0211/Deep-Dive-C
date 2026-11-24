#include <stdio.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int marks;
} stud;

int main()
{
    stud s1[5];
    int max, position;

    printf("Enter names of 5 students then their marks respectively:\n");

    for (int i = 0; i < 5; i++)
    {
        fgets(s1[i].name, sizeof(s1[i].name), stdin);
        s1[i].name[strcspn(s1[i].name, "\n")] = '\0';
    }

    printf("Enter marks of 5 students:\n");

    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &s1[j].marks);
    }

    max = s1[0].marks;
    position = 0;

    for (int k = 0; k < 5; k++)
    {

        if (s1[k].marks > max)
        {
            max = s1[k].marks;
            position = k;
        }

        printf("Name: %s, Marks: %d\n", s1[k].name, s1[k].marks);
    }

    printf("Topper: %s, Marks: %d\n", s1[position].name, s1[position].marks);

    return 0;
}