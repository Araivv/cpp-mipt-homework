#include<math.h>
#include<stdio.h>
int main()
{
    int x1, y1, r1;
    int x2, y2, r2;

    scanf("%d %d %d", &x1, &y1, &r1);
    scanf("%d %d %d", &x2, &y2, &r2);

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distance < r1 + r2)
    {
        printf("Intersect\n");
    }
    else if (distance - (r1 + r2) < 1e-5)
    {
        printf("Touch\n");
    }
    else
    {
        printf("Do not intersect\n");
    }
}