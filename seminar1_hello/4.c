#include <stdio.h>

void square_cube(int number)
{
    printf("%d -> %d -> %d\n", number, number*number, number*number*number);
}

int main()
{
    int number;
    scanf("%d", &number);
    for (int i = 1; i < number+1; ++i) {
        square_cube(i);
    }
}