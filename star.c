#include <stdio.h>

// Functions Prototypes
void leftpyramid(int total_lines);
void centeredpyramid(int total_lines);
void rightpyramid(int total_lines);
void invertedpyramid(int total_lines);
void diamond(int total_lines);

void leftpyramid(int total_lines)
{
    int lineNumber, star;
    printf("\n");

    // Each row prints (row index + 1) stars
    for (lineNumber = 0; lineNumber < total_lines; lineNumber++)
    {
        for (star = 0; star < (lineNumber + 1); star++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------------------\n");
}

void centeredpyramid(int total_lines)
{
    int lineNumber, star;
    printf("\n");

    // For each row:
    // 1. Print spaces
    // 2. Print odd number of stars (1,3,5...)
    for (lineNumber = 0; lineNumber < total_lines; lineNumber++)
    {
        // left spacing before stars
        for (star = 0; star < total_lines - lineNumber - 1; star++)
        {
            printf(" ");
        }
        // main stars
        for (star = 0; star < (2 * lineNumber) + 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------------------\n");
}

void rightpyramid(int total_lines)
{
    int lineNumber, star;
    printf("\n");

    // Similar to left pyramid but shifted using spaces
    for (lineNumber = 0; lineNumber < total_lines; lineNumber++)
    {
        // spaces to push stars to the right
        for (star = 0; star < total_lines - lineNumber - 1; star++)
        {
            printf(" ");
        }
        // stars
        for (star = 0; star < lineNumber + 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------------------\n");
}

void invertedpyramid(int total_lines)
{
    int lineNumber, star;
    printf("\n");

    // Opposite of centered pyramid
    for (lineNumber = 0; lineNumber < total_lines; lineNumber++)
    {
        // spacing increases each row
        for (star = 0; star < lineNumber; star++)
        {
            printf(" ");
        }
        // stars decrease each row
        for (star = 0; star < (2 * (total_lines - lineNumber - 1) + 1); star++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n---------------------------\n");
}

void diamond(int total_lines)
{
    int lineNumber, star;
    printf("\n");

    // Upper half of the diamond
    for (lineNumber = 0; lineNumber < total_lines; lineNumber++)
    {
        // spaces before stars
        for (star = 0; star < total_lines - lineNumber - 1; star++)
            printf(" ");
        // stars increase
        for (star = 0; star < (2 * lineNumber) + 1; star++)
            printf("*");
        printf("\n");
    }

    // Lower half (inverted pyramid)
    // Starts from 1 to avoid repeating the middle row
    for (lineNumber = 1; lineNumber < total_lines; lineNumber++)
    {
        // spaces
        for (star = 0; star < lineNumber; star++)
            printf(" ");
        // stars decrease
        for (star = 0; star < (2 * (total_lines - lineNumber) - 1); star++)
            printf("*");
        printf("\n");
    }

    printf("\n---------------------------\n");
}

int main()
{
    int n = 1; // keeps the program running until user chooses Exit

    while (n == 1)
    {
        int star, lineNumber, total_lines, Choice;

        // Main menu
        printf("\n===STAR PRINT GENERATOR===\n");
        printf("Choose your method: \n");
        printf("1. Left Pyramid\n");
        printf("2. Centered Pyramid\n");
        printf("3. Right Pyramid\n");
        printf("4. Inverted Pyramid\n");
        printf("5. Diamond\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &Choice);

        switch (Choice)
        {
        // ---------------- LEFT PYRAMID ----------------
        case 1:
        {
            printf("Enter the lines you want: ");
            scanf("%d", &total_lines);
            leftpyramid(total_lines);
            break;
        }

        // ---------------- CENTERED PYRAMID ----------------
        case 2:
        {
            printf("Enter the lines you want: ");
            scanf("%d", &total_lines);
            centeredpyramid(total_lines);
            break;
        }

        // ---------------- RIGHT PYRAMID ----------------
        case 3:
        {
            printf("Enter the lines you want: ");
            scanf("%d", &total_lines);
            rightpyramid(total_lines);
            break;
        }

        // ---------------- INVERTED PYRAMID ----------------
        case 4:
        {
            printf("Enter the lines you want: ");
            scanf("%d", &total_lines);
            invertedpyramid(total_lines);
            break;
        }

        // ---------------- DIAMOND SHAPE ----------------
        case 5:
        {
            printf("Enter the lines you want: ");
            scanf("%d", &total_lines);
            diamond(total_lines);
            break;
        }

        // ---------------- EXIT ----------------
        case 6:
        {
            printf("\nEXITED THE PROGRAM!\n");
            printf("---------------------------\n");
            n = 0; // stop looping
            break;
        }

        // ---------------- INVALID CHOICE ----------------
        default:
        {
            printf("\nInvalid input! Try again.\n");
            printf("---------------------------\n");
            break;
        }
        }
    }

    return 0;
}
