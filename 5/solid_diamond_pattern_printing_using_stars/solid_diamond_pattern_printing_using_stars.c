#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n=6;
    int mid = n/2+1;
    int crucial_point = mid;
    for(int i=1; i <= mid; i++)
    {
        for(int j=1; j<=i+mid; j++)
        {
            if(j<=crucial_point)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        crucial_point--;
        printf("\n");
    }
    crucial_point = 0;
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j < i+mid; j++)
        {
            if( j <= crucial_point)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        crucial_point++;
        printf("\n");
    }
    return 0;

}
