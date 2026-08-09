#include <stdio.h>

void addMarks(int marks[], int *count)
{
    if (*count >= 100)
    {
        printf("You have reached the 100 students limit\n");
        return;
    }

    int mark;
    printf("Enter a value: ");
    scanf("%d", &mark);

    while (mark < 0 || mark > 100)
    {
        printf("Enter a value that is above 0 and below 100\n");
        scanf("%d", &mark);
    }

    marks[*count] = mark;
    (*count)++;
}

void displayMarks(int marks[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");
}

int findhighest(int marks[], int count)
{
    int max;
    max = marks[0];

    for (int index = 1; index <= count - 1; index++)
    {
        if (marks[index] > max)
        {
            max = marks[index];
        }
    }
    return max;
}

int findlowest(int marks[], int count)
{
    int min;
    min = marks[0];

    for (int index = 1; index <= count - 1; index++)
    {
        if (marks[index] < min)
        {
            min = marks[index];
        }
    }
    return min;
}

float calculateAverage(int marks[], int count)
{
    int sum = 0;
    float avg;

    for (int j = 0; j < count; j++)
    {
        sum = sum + marks[j];
    }

    avg = (float)sum / count;
    return avg;
}

void countpassfail(int marks[], int count)
{
    int pass = 0, fail = 0;

    for (int i = 0; i < count; i++)
    {
        if (marks[i] >= 40)
        {
            pass = pass + 1;
        }
        else
        {
            fail = fail + 1;
        }
    }
    printf("Pass count: %d\n", pass);
    printf("Fail count: %d\n", fail);
}

int frequency(int marks[], int count)
{
    int x, c = 0;

    printf("Enter a number you want to check: ");
    scanf("%d", &x);

    for (int i = 0; i < count; i++)
    {
        if (marks[i] == x)
        {
            c = c + 1;
        }
    }
    return c;
}

void increaseMarks(int marks[], int count)
{
    int bonus;

    printf("Enter a value: ");
    scanf("%d", &bonus);

    int *p = marks;

    for (int i = 0; i < count; i++)
    {
        *p += bonus;
        p++;
    }
}

void showtoppers(int marks[], int count)
{
    int top;
    top = findhighest(marks, count);

    for (int i = 0; i < count; i++)
    {
        if (marks[i] == top)
        {
            printf("Topper: %d\n", marks[i]);
        }
    }
}

int main()
{
    int marks[100], count = 0, c, e, h;
    float f;
    while (1)
    {

        int d;

        printf("========== MENU ==========\n");
        printf("Students entered: %d\n", count);
        printf("1. Add student marks\n2. Display all marks\n3. Find highest mark\n4. Find lowest mark\n5. Calculate average\n6. Count pass/fail\n7. Search frequency of a mark\n8. Increase all marks by bonus marks\n9. Exit\n==========================\n");
        scanf("%d", &d);

        switch (d)
        {
        case 1:
            addMarks(marks, &count);
            break;

        case 2:
            displayMarks(marks, count);
            break;

        case 3:
            c = findhighest(marks, count);
            printf("Highest marks: %d\n", c);
            showtoppers(marks, count);
            break;

        case 4:
            e = findlowest(marks, count);
            printf("Lowest mark: %d \n", e);
            break;

        case 5:
            f = calculateAverage(marks, count);
            printf("Average is: %.2f\n", f);
            break;

        case 6:
            countpassfail(marks, count);
            break;

        case 7:
            h = frequency(marks, count);
            printf("Frequency: %d\n", h);
            break;

        case 8:
            increaseMarks(marks, count);
            break;

        case 9:
            return 0;
            break;

        default:
            printf("Choose among given options");
            break;
        }
    }
}