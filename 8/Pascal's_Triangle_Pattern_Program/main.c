#include <stdio.h>
#include <stdlib.h>
#define SIZE 8
int main()
{
    int l[SIZE][SIZE] = { 0 };
    l[0][1] = 1;
    for (int i = 1; i < SIZE; i++)
    {
        l[i][1] = 1;
        for (int j = 1; j < i + 1; j++)
        {

            // Value for the current cell of Pascal's triangle
            l[i][j] = (l[i - 1][j - 1] + l[i - 1][j]);
        }
    }
    for (int i = 1; i < SIZE; i++)
    {

        for (int j = 1; j < i+1; j++)
        {
            if(l[i][j]!=0)
            {
                printf("%i ",l[i][j]);

            }
        }
        printf("\n");
    }
    return 0;
}
