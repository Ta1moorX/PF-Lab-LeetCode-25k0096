#include <stdio.h>

void SortingArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int nums[100], n, i;
    
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    SortingArray(nums, n);

    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

