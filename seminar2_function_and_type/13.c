#include <stdio.h>

long long fact(long long n)
{
    long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}
int main()
{
    long long k;
    scanf("%lld", &k);
    printf("%lld\n", fact(k));
}