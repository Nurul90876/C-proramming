#include<stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int cnt[m + 1];

    // Initialize count array
    for (int i = 1; i <= m; i++) {
        cnt[i] = 0;
    }

    // Read numbers and count frequency
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        cnt[x]++;
    }

    // Print counts from 1 to m
    for (int i = 1; i <= m; i++) {
        printf("%d\n", cnt[i]);
    }

    return 0;
}
