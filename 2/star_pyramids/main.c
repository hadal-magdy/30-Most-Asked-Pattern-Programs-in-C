#include <stdio.h>
#include <stdlib.h>
void half_pyramid_star(int n);
void inverted_half_pyramid(int n);
void full_pyramid_star(int n);
int main()
{
    printf("this is a half pyramid star\n");
    half_pyramid_star(5);
    printf("this is an inverted half pyramid star\n");
    inverted_half_pyramid(5);

    return 0;
}
