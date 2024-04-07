#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 9;
    int crucial_point = n;
    int steps = 1;
    for(int i=1; i <= n; i++)
    {
        int counter = 0;
        for(int j=1; j<=i+n; j++)
        {
            if(j<=crucial_point)
            {
                printf(" ");
            }
            else
            {
                if(j <= (steps/2)+crucial_point+1)
                {
                    printf("%i",++counter);
                }
                else
                {
                    printf("%i",--counter);

                }
            }
        }
        steps += 2;
        crucial_point--;
        printf("\n");
    }
    return 0;
}
