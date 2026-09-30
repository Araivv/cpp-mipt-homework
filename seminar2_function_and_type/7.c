#include <stdio.h>

int count_even(int arr[], int len) 
{
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() 
{
    int arr[100], len;
    scanf("%d", &len);

    for (int i = 0; i < len; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", count_even(arr, len));
}
