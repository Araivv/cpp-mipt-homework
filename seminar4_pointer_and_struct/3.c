#include <stdio.h>

void cube(float* px)
{
    *px = (*px) * (*px) * (*px);
}

int main()
{
    float x;
    cube(&x);
    printf("%f\n", x);
}