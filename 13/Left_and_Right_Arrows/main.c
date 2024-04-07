#include <stdio.h>
int main()
{
    int n = 7;
    int x = n/2;
    int y = n/2;
    int mid = n/2;
    printf("\n\n\nRight Arrow\n\n\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == y || i == mid)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(i < mid)
        {
            ++y;
        }
        else
        {
            --y;
        }
    }
    printf("\n\n\nLeft Arrow\n\n\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(j == x || i == mid)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(i < mid)
        {
            --x;
        }
        else
        {
            ++x;
        }
    }
    return 0;
}
