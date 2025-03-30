/*
 * Purpose: This file is part of the 'practice/' directory, which contains 
 * exercises and smaller projects aimed at building foundational skills in C 
 * and logical thinking. Each file here serves as a learning exercise, 
 * unrelated to the main data structures library.
 * 
 * Contents: This file focuses on practicing loop constructs and nested loops 
 * to print various patterns. The goal is to enhance problem-solving skills 
 * and strengthen the understanding of control flow in C.
 */

 #include <stdio.h>

void pattern1(int n)
 {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
 }
void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            printf("%d", j + 1);
        }
        printf("\n");
    }
}
void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = n - i - 1, star = i * 2 + 1;

        // Spaces
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // Stars
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        // Spaces
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        int space = i, star = (2 * n) - (2 * i) - 1;

        // Space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }


        // Star
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }


        // Space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}

 int main()
 {
    FILE* inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int num;
    while (fscanf(inputFile, "%d", &num) == 1)
    {
        pattern8(num);
    }

    fclose(inputFile);

    return 0;
 }