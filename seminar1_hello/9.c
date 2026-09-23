#include <stdio.h>

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
}

int main()
{
    int n;
    scanf("%i", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%i", &arr[i]);
    }

    print_array(arr, n);
    print_array(arr, n);
}