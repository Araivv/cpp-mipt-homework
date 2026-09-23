#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    
    scanf("%i", &n);
    
    int max = INT_MIN;
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int a;

        scanf("%i", &a);
        
        if (a > max)
            max = a;
        
        if (a == max)
            count++;
    }
    
    printf("Max = %i\n", max);
    printf("Count = %i\n", count);
}