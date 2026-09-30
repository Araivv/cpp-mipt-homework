#include <stdio.h>
#include <math.h>

double gamma(double x)
{
    const double step = 1e-2;
    const double eps = 1e-10;
    
    double sum = 0.0;
    double t = 0.0;
    double f_curr = pow(t, x - 1) * exp(-t);

    while (1) {
        double t_next = t + step;
        double f_next = pow(t_next, x - 1) * exp(-t_next);
        double area = (f_curr + f_next) * step / 2.0;
        
        if (t > x - 1 && area <= eps) break;

        sum += area;
        t = t_next;
        f_curr = f_next;
    }
    return sum;
}

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.6lf\n", gamma(x)); 
}