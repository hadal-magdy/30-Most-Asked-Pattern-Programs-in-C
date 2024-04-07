#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        int k = i;
        for(int j = 1; j <= i ; j++){
            printf("%d",k++);
        }
        k = k-2;
        for(int j = 1; j < i ; j++){
            printf("%d",k--);
        }
        printf("\n");
    }
    return 0;
}
