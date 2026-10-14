#include <stdio.h>

struct game
{
    char title[50];
    double avg;
};
typedef struct game Game;

int main()
{
    int n;
    scanf("%d", &n);
    char temp;
    scanf("%c", &temp); 

    Game games[100];
    for (int i = 0; i < n; ++i)
    {
        scanf("%[^:]", games[i].title);
        scanf("%c", &temp);
        int k;
        scanf("%d", &k);
        int sum = 0;
        for (int j = 0; j < k; ++j)
        {
            int mark;
            scanf("%d", &mark);
            sum += mark;
        }
        games[i].avg = (k > 0) ? (double)sum / k : 0.0;
        scanf("%c", &temp);
    }

    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1 - i; ++j)
            if (games[j].avg < games[j + 1].avg)
            {
                Game t = games[j];
                games[j] = games[j + 1];
                games[j + 1] = t;
            }

    for (int i = 0; i < n; ++i)
        printf("%s, %.3f\n", games[i].title, games[i].avg);
}
