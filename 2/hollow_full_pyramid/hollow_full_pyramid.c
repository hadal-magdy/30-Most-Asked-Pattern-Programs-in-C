#include <stdio.h>

int main()
{

    int size = 5;
    int x = 5;
    int y = 5;

    for (int i = 1; i <= size; i++)
    {

        for (int j = 1; j <= size * 2; j++)
        {
            if(i == size)
            {
                if(j%2!=0){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }

            else if (j == x || j == y)
            {

                printf("*");

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
