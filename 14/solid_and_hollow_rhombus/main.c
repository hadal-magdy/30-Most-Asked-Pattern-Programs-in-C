#include <stdio.h>

int main()
{

    int n = 4;
    int spaces = n - 1;
    printf("\n\n\nsolid rhombus\n\n\n");
    for(int  i = 0; i < n; i++)
    {
        for(int s = 0; s < spaces; s++)
        {
            printf(" ");
        }
        for(int  j = 0; j < n; j++)
        {
            printf("*");
        }
        --spaces;
        printf("\n");
    }
    /******************/
    spaces = n - 1;
    printf("\n\n\nhollow rhombus\n\n\n");
    for(int  i = 0; i < n; i++)
    {
        for(int s = 0; s < spaces; s++)
        {
            printf(" ");
        }
        for(int  j = 0; j < n; j++)
        {
            if(j == 0 || i == 0 || j == n-1 || i == n-1)
                printf("*");
            else
                printf(" ");
        }
        --spaces;
        printf("\n");
    }

    return 0;
}
