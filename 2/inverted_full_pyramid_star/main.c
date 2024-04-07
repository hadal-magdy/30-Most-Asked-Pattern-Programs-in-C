#include<stdio.h>
int main(){
    int crucial_point = 0;
    int size = 6;
    int mid = size/2+1;
    for(int i = size;i >= 1;i--){
        for(int j = 0; j < i+mid;j++){
            if( j <= crucial_point){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        crucial_point++;
        printf("\n");
    }







    return 0;
}
