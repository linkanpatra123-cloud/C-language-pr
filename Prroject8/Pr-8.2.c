#include <stdio.h>

int cube(int *p, int n) {
    for (int i = 0; i < n * n; i++) {
        printf("%d ", (*(p + i)) * (*(p + i)) * (*(p + i)));
        if ((i + 1) % n == 0)
            printf("\n");
    }
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    cube(&a[0][0], n);

}

// Enter array size: 2
// Enter array elements:
// 3
// 2
// 5
// 4
// Cubes of all elements:
// 27 8
// 125 64