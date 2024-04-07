#include <stdio.h>
int main()
{
    int n = 10;
    int x = n/2;
    int y = n/2;
    int mid = n/2;
    for(int i = 0; i <= n; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(j == x || j == y || j == n/2)
            {
                printf("*");
            }
            else if(i == n/2 && j >= x && j <= y){
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        if(i < mid)
        {
            --x;
            ++y;
        }
        else
        {
            ++x;
            --y;
        }
    }
    return 0;
}
