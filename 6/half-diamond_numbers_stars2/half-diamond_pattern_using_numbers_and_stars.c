
#include <stdio.h>
int main()
{
    int number = 1;
    int size = 4;
    /******************/
    for(int i=1; i<=size; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i == 1)
            {
                printf("%i",1);

            }
            else
            {
                printf("%i*",++number);

            }
        }
        printf("\n");
    }
    /************************/
    int diff = size - 1;
    number = number - diff - 1;
    int increasing = number;
    for(int i=size; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(j == 1){
                number = increasing;
            }
            if(i==1){
                printf("%i",i);
            }
            else{
                printf("%d*",++increasing);
            }
        }
        increasing = number - diff;
        --diff;
        printf("\n");
    }

    return 0;
}
