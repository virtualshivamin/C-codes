#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows for the first matrix (n): ");
    scanf("%d", &n);

    int arr1[n][n], arr2[n][n], mul[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mul[i][j] = 0;
        }
    }

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
                // mul[i][j] = mul[i][j] + ( arr1[i][k] * arr2[k][j] );
            }
        }
    }

    printf("matrix after multiplication:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
