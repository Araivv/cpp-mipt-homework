#include<math.h>
#include<stdio.h>
int main()
{
    int n;
    float pi = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) 
    {
        pi += pow(-1, i+1) * (4.0 / (2 * i - 1));
    }
    printf("%f\n", pi);
}