#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if (number > 0 && number < 100) {
        number += 1;
        printf("%d\n", number);
    }
}