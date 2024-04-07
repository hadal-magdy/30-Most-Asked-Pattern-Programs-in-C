
#include <stdio.h>
int main()
{
    int rows = 3;
    int steps = 2;
    printf("*\n");
    for(int i=1; i<=rows; i++)
    {
        printf("*");
        int counter = 0;
        for(int j=0; j<steps-1; j++)
        {
            int mid = steps / 2;
            if(j < mid )
            {
                printf("%i",++counter);

            }
            else
            {
                printf("%i",--counter);

            }
        }
        steps+=2;
        printf("*\n");
    }
    /************************/
    steps-=4;
    for(int i=1; i<=rows-1; i++)
    {
        printf("*");
        int counter = 0;
        for(int j=0; j<steps-1; j++)
        {
            int mid = steps / 2;
            if(j < mid )
            {
                printf("%i",++counter);

            }
            else
            {
                printf("%i",--counter);

            }
        }
        steps-=2;
        printf("*\n");
    }
    printf("*");

    return 0;
}
