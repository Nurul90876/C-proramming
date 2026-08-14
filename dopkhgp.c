#include <stdio.h>

int main() {
    int N;

    // Read the size of the array
    scanf("%d", &N);

    int A[N];

    // Read the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Print values at odd indexes in reverse order
    for (int i = N - 1; i >= 0; i--) {
        if (i % 2 == 1) {
            printf("%d ", A[i]);
        }
    }

    return 0;
}
