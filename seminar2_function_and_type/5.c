#include <stdio.h>

void print_binary(int n) 
{
    if (n < 2) {
        printf("%d", n);
        return;
    }
    
    print_binary(n / 2);
    
    printf("%d", n % 2);
}
int main()
{
    int a;
    scanf("%d", &a);
    print_binary(a);
    printf("\n");
}