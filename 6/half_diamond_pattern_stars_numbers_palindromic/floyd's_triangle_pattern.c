#include <stdio.h>
int main()
{
    int size = 7;
    int counter = 0;
    for(int i=1; i<=size; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%i",++counter);


        }
        printf("\n");
    }
    return 0;
}


