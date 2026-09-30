#include <stdio.h>

long long trib(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 1;
    
    long long t0 = 0;
    long long t1 = 0;
    long long t2 = 1;
    long long current = 0;
    
    for (int i = 3; i <= n; i++) {
        current = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = current;
    }
    
    return current;
}

int main() 
{
    int a;
    scanf("%d", &a);
    printf("%lld\n", trib(a));
}
