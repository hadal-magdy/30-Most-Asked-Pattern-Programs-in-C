#include <stdio.h>

int main()
{
    int size = 7;
    for(int i = size; i > 0; i--)
    {
        int inc = 1;
        if(i>=1 && i<size)
        {
            printf("%d",(size-i+1));
            for(int j=0; j<i-2; j++)
            {
                printf(" ");
            }
            if(i!=1)
            {
                printf("%d\n",size);

            }
        }
        else
        {
            for(int j=0; j<i; j++)
            {
                printf("%d",inc++);
            }
            printf("\n");
        }
    }
    return 0;
}
