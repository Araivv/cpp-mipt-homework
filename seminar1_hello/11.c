#include <stdio.h>

int main()
{
    int n, m;
    scanf("%i %i", &n, &m);

    int sums[m];
    for (int j = 0; j < m; ++j) 
    {
        sums[j] = 0;
    }

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < m; ++j) 
        {
            int val;
            scanf("%i", &val);
            sums[j] += val;
        }
    }

    for (int j = 0; j < m; ++j) 
    {
        printf("%i ", sums[j]);
    }
}
