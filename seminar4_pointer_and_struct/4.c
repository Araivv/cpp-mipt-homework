#include <stdio.h>
#include <stddef.h>

void mult2_a(int* p, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        *(p + i) *= 2;
}

void mult2_b(int* p, size_t n)
{
    for (size_t i = 0; i < n; ++i)
        p[i] *= 2;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    mult2_a(a, 5);
    for (int i = 0; i < 5; ++i) printf("%i ", a[i]);
    printf("\n");
    mult2_b(a, 5);
    for (int i = 0; i < 5; ++i) printf("%i ", a[i]);
    printf("\n");
}