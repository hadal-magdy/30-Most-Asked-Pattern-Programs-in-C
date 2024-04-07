#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 7;
    int x = 1;
    int y = n;
    for(int i = 0; i <= n-1; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i == 0 || j == 1 || i == n-1 || j == n)
            {
                printf("*");
            }
            else
            {
                if(j == x || j == y)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
        if(i < n)
        {
            ++x;
            --y;
        }
        else
        {
            --x;
            ++y;
        }
    }
    return 0;

}

