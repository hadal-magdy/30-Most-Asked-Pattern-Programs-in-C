#include <stdio.h>
#include <stdlib.h>
int main(){

    int n = 7;
    int crucial_point = n;
    for(int i=1; i <= n; i++){
        for(int j=1;j< i+crucial_point*2;j++){
            if(j<=crucial_point || j > i+crucial_point){
                printf("*");
            }
            else{
                printf("%d*",i);
            }
        }
        crucial_point--;
        printf("\n");
    }
    return 0;
}

