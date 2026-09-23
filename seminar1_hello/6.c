#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%i", &n);
    
    int max = INT_MIN;
    int length = 1;
    while (n>1)
   {
    if (n%2==0)
    {
        n = n/2;
        printf("%i\n", n);
    }

    else
    {
        n = 3*n + 1;
        printf("%i\n", n);
    }
    
        length++;
        if (n > max)
            max = n;
    }
    
    printf("Max = %i\n", max);
    printf("length = %i\n", length);
}