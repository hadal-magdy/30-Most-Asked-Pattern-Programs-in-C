#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int size = n*2;
    int x = n;
    int y = n;
    for(int i = 0; i <= size; i++){
        for(int j = 0; j <= size; j++){
            if(j < x || j > y){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        if(i < n)
        {
            --x;
            ++y;
        }
        else{
            ++x;
            --y;
        }
    }
    return 0;

}

