#include <stdio.h>

int sum_digits(int num) 
{
    int sum = 0;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() 
{
    int n;
    scanf("%i", &n);

    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%i", &arr[i]);
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (sum_digits(arr[j]) > sum_digits(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        printf("%i ", arr[i]);
    }
}
