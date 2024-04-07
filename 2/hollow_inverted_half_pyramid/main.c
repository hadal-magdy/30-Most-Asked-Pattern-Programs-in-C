#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("enter the size\n");
    scanf("%d",&size);
    for(int i = size; i > 0; i--)
    {
        if(i>1 && i<size)
        {
            printf("*");
            for(int j=0; j<i-2; j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
        else
        {
            for(int j=0; j<i; j++)
            {
                printf("*");
            }
        }
    }
    return 0;
}
