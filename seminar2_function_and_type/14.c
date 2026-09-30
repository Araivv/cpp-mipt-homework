#include <stdio.h>

long long fact(long long n)
{
    long long result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

long long perm(long long n, long long k)
{
    return fact(n) / fact(n - k);
}

int main()
{
    long long n, k;
    scanf("%lld %lld", &n, &k);

    printf("%lld\n", perm(n, k));
}