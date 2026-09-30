#include <stdio.h>

int is_even(int x)
{
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

void print_even(int a, int b)
{
    for (int i = a; i <= b; i++) {
        if (is_even(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    print_even(a, b);
}