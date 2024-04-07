#include <stdio.h>

int main()
{
    int n = 7;
    int steps = 1;
    for(int i=1; i<=n; i++)
    {
        int counter = 0;
        for(int j=1; j<=steps; j++)
        {
            if(j <= (steps/2+1))
            {
                printf("%d",++counter);

            }
            else
            {
                printf("%d",--counter);

            }
        }
        steps+=2;
        printf("\n");
    }
    return 0;
}
