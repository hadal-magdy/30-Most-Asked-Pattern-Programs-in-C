#include <stdio.h>

int main()
{
    int size = 4;
    printf("enter the size\n");
    scanf("%d",&size);
    int x = size;
    int y = size;
    int diff = size-1;

    for (int i = 1; i <= size; i++)
    {
        int inc  = 1;

        for (int j = 1; j <= size * 2; j++)
        {
            if(i == size)
            {
                if(j%2!=0)
                {
                    printf("%d",inc++);
                }
                else
                {
                    printf(" ");
                }
            }

            else if (j == x)
            {

                printf("1");

            }
            else if (j == y){
                printf("%d",y-diff);
            }
            else
            {

                printf(" ");

            }

        }

        x--;
        y++;

        printf("\n");

    }

}
