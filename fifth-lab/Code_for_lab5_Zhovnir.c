#include <stdio.h>

int main() {
    int n = 8;
    int mas[8] = {77, 12, 74, 34, 56, 78, 234, 678};
    printf("Option 1:\n");
    for (int i = 0; i < n; ++i){
        printf("%d  ", mas[i]);
    }
    printf("\n");
    for (int i = 0; i < n; ++i){
        printf("%d   ", i);
    }
    printf("\n");
    printf("Option 2:\n");
    for (int i = 0; i < n; ++i){
        printf("%d - %d; ", i, mas[i]);

    }
    printf("\n");
    printf("Option 3:\n");
    for (int i = 0; i < n; ++i){
        printf("Index: %d - Number: %d  ", i, mas[i]);
        printf("\n");
    }
    printf("\n");
    printf("Matrix:\n");
    int C[2][2] = {{0, 0}, {0, 0}};
    int A[2][2] = {{2, 1}, {1, 3}};
    int B[2][2] = {{1, 2}, {3, 1}};
    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1];
    for (int i = 0; i < 2; ++i){
        printf("%d  ", C[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 2; ++i){
        printf("%d ", C[1][i]);
    }
    printf("\n");
    return 0;
}
