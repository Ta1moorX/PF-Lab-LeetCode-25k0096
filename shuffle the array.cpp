#include <stdio.h>

int main() {
    int nums[1000], res[1000];
    int n, i, j = 0;

    scanf("%d", &n);
    for (i = 0; i < 2 * n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        res[j++] = nums[i];
        res[j++] = nums[i + n];
    }

    for (i = 0; i < 2 * n; i++) {
        printf("%d ", res[i]);
    }

    return 0;
}

