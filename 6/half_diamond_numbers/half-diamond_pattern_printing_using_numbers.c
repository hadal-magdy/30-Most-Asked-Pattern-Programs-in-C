
#include <stdio.h>
int main()
{
    int number = 20;
    int steps = 15;
    /*************/
    for(int i=1; i<=steps; i++)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%i ",number);
        }
        ++number;
        printf("\n");
    }
    number-=2;
    for(int i=steps-1; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            printf("%i ",number);
        }
        --number;

        printf("\n");
    }

    return 0;
}
