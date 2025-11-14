#include <stdio.h>

int main() {
    int nums[1000], n, i;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 1; i < n; i++) {
        nums[i] = nums[i] + nums[i - 1];
    }

    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

