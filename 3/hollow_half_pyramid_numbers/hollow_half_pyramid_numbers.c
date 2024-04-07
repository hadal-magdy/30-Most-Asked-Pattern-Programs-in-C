#include <stdio.h>

int main()
{
    int size;
    printf("enter the size\n");
    scanf("%i",&size);
    for(int i = 0; i <= size-1; i++)
    {
        int col = 1;
        if(i>0 && i<size-1)
        {
            printf("%d",col);
            col++;
            for(int j=0; j<i-1; j++)
            {
                printf(" ");
                col++;
            }
            printf("%d\n",col);
            col++;
        }
        else
        {
            for(int j=0; j<=i; j++)
            {
                printf("%d",col);
                col++;
            }
            printf("\n");
        }
    }
    return 0;
}
