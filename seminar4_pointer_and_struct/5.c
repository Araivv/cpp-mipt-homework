#include <stdio.h>
#include <math.h>
#define EPS 1e-10

int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
    double d = b * b - 4 * a * c;

    if (d < -EPS)
        return 0;

    if (d < EPS) 
    {
        *px1 = -b / (2 * a);
        return 1;
    }

    *px1 = (-b - sqrt(d)) / (2 * a);
    *px2 = (-b + sqrt(d)) / (2 * a);
    return 2;
}

int main()
{
    double x1, x2;
    int n = solve_quadratic(1, -3, 2, &x1, &x2);
    printf("%i: %f %f\n", n, x1, x2);
}