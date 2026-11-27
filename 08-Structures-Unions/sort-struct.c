#include <stdio.h>

typedef struct student
{
    char name[50];
    int marks;
} stud;

void sortByMarks(stud arr[], int n)
{
    stud temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].marks < arr[j + 1].marks)
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printAll(stud arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name: %s, Marks: %d\n", arr[i].name, arr[i].marks);
    }
}

int main()
{
    stud arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", arr[i].name);

        printf("Enter marks: ");
        scanf("%d", &arr[i].marks);
    }

    printf("\nBefore:\n");
    printAll(arr, 5);

    sortByMarks(arr, 5);

    printf("\nAfter:\n");
    printAll(arr, 5);

    return 0;
}
