#include <stdio.h>

void reverse(int arr[], int len) 
{
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

int main() 
{
    int arr[100], len;
    scanf("%d", &len);

    for (int i = 0; i < len; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverse(arr, len);
    print_array(arr, len);
}
