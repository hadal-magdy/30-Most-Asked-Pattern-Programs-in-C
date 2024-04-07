#include <stdio.h>

int main()
{
    int size;
    printf("enter the size\n");
    scanf("%i",&size);
    for(int i = 0; i <= size; i++)
    {
        if(i>0 && i<size)
        {
            printf("*");
            for(int j=0; j<i-1; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else
        {
            for(int j=0; j<=i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}

