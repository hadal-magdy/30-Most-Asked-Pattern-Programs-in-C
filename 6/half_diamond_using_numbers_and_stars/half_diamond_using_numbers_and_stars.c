
#include <stdio.h>
int main()
{
    int number = 1;
    int size = 5;
    /******************/
    for(int i=1; i<=size; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i == 1)
            {
                printf("%i",number);

            }
            else
            {
                printf("%i*",number);

            }
        }
        ++number;
        printf("\n");
    }
    for(int i=size; i>0; i--)
    {
        --number;
        for(int j=1; j<=i; j++)
        {
            if(i == 1)
            {
                printf("%i",number);

            }
            else
            {
                printf("%i*",number);

            }
        }
        printf("\n");
    }

    return 0;
}
