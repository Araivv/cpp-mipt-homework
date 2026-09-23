#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    if ((number >= 0 && number <= 20) || (number > 100 && number < 200))
    {
        printf("Yes");
    }

    else
    {
        printf("No");   
    }
}