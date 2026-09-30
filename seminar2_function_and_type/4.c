#include <stdio.h>

void sum_of_digits(int x)
{
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    printf("%d\n", sum);
}

int sum_of_digits_rec(int x)
{
    if (x < 10) {
        return x;
    }
    return sum_of_digits_rec((x / 10) + x % 10);
}

int main()
{
    int a;
    scanf("%d", &a);
    sum_of_digits(a);
    printf("%d\n", sum_of_digits_rec(a));
}