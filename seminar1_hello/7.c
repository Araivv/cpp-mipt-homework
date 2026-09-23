#include <stdio.h>
#include <math.h> 

int det(int n, int m)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            sum += i * j * pow(-1, i + j);
        }
    }
    return sum;
}

int main()
{
    int n, m, sum;
    scanf("%i %i", &n, &m);
    sum = det(n, m);
    printf("%i", sum);
}