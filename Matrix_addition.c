#include <stdio.h>

int main() {
    int n, N;
    
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (N): ");
    scanf("%d", &N);

    int arr1[n][N], arr2[n][N], sum[n][N];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < N; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
