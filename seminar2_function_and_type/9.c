#include <stdio.h>

int bob(int *n); 

int alice(int *n)
{
    *n = (*n) * 3 + 1; 
    printf("Alice: %d\n", *n);
    return bob(n); 
}

int bob(int *n)
{
    printf("Bob:   %d\n", *n);

    if (*n == 1) return 1;
    
    if (*n % 2 == 0) {
        *n = *n / 2;
        return bob(n);
    } else {
        return alice(n);
    }
}

int main() 
{
    int a;
    scanf("%d", &a);
    alice(&a);
}
