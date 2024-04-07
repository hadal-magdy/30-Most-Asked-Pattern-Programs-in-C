#include <stdio.h>
#include <stdlib.h>
#include "hollow_rectangle_header.h"
int main()
{
    int rows, columns;

    printf("\n Enter the number of rows : ");

    scanf("%d", &rows);

    printf("\n Enter the number of columns : ");

    scanf("%d", &columns);

    printf("\n");

    hollow_rectangle(rows, columns);













//    int row, column,start;
//    start = 1;
//    printf("enter the row\n");
//    scanf(" %i",&row);
//    printf("enter the column\n");
//    scanf(" %i",&column);
//    for(int i=start; i<=column; i++)
//    {
//        for(int j=start; j<=row; j++)
//        {
//
//            if((i==start)||(i==row)||(j==start))
//            {
//                printf("*");
//            }
//            else if((j==column-1) && (i==start+1)||(i==row-1))
//            {
//                printf("*");
//
//            }
//            else
//            {
//                printf(" ");
//            }
//
//        }
//        printf("\n");

//    }
    return 0;
}
