#include<stdio.h>

int main()
{
    int input;
    int i, j;

    printf("Enter number : ");
    scanf_s("%d", &input);

    for (i = 1; i <= input; i++)
    {
        for (j = 1; j <= input; j++)
        {
            if (i == 1 || i == input || j == 1 || j == input) printf("*");
            else printf(" ");
        }
        printf("\n");
    }

}