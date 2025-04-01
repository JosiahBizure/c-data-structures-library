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
void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}
void pattern10(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = (i < n) ? i + 1 : ((2 * n) - i - 1);
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", ((i + j) % 2 == 0) ? 0 : 1);
        }
        printf("\n");
    }
}
void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int value = i, space = (2 * n) - 2 * i;

        // Value
        for (int j = 0; j < value; j++)
        {
            printf("%d", j + 1);
        }
        
        // Space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // Value
        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern13(int n)
{
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d", value++);
        }
        printf("\n");
    }
}
void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char ch = 'A' + i - 1;
         for (int j = 0; j < i; j++)
         {
            printf("%c", ch);
         }
         printf("\n");
    }
}
void pattern17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        // Space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        // Characters
        for (int j = 0; j < 2 * i - 1; j++)
        {
            char ch = (j < i) ? ('A' + j) : ('A' + 2 * i - 2 - j);
            printf("%c", ch);
        }

        // Space
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        printf("\n");
    }
}
void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' + n - 1 - i; ch <= 'A' + n - 1; ch++)
        {
            printf("%c", ch);
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
        pattern18(num);
    }

    fclose(inputFile);

    return 0;
 }