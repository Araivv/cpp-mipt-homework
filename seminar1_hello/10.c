#include <stdio.h>

int main()
{
    int a[1000];
    int n;
    
    scanf("%i", &n);
    
    for (int i = 0; i < n; ++i)
        scanf("%i", &a[i]);
    
    int new_size = 0; 
    for (int i = 0; i < n; ++i) 
    {
        if (a[i] >= 0) 
        {
            a[new_size] = a[i]; 
            new_size++;
        }
    }
    n = new_size; 

    for (int i = 0; i < n; ++i) 
        printf("%i ", a[i]);
}
