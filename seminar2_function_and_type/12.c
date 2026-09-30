#define MAX 100
#include <stdio.h>

void assign(float A[MAX][MAX], float B[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = B[i][j];
        }
    }
}

void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            C[i][j] = 0; 
            for (int k = 0; k < n; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void power(float A[MAX][MAX], float C[MAX][MAX], int n, int k)
{
    float B[MAX][MAX];

    assign(C, A, n);
    
    for (int step = 1; step < k; step++)
    {
        multiply(C, A, B, n);
        assign(C, B, n);
    }
}

int main()
{
    float A[MAX][MAX];
    float B[MAX][MAX];
    float C[MAX][MAX];

    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%f", &A[i][j]);
        }
    }

    power(A, C, n, k);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}