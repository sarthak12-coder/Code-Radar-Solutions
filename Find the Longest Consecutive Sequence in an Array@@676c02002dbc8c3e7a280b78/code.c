#include <stdio.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    qsort(nums, numsSize, sizeof(int), compare);

    int longest = 1;
    int currentStreak = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) continue;

        if (nums[i] == nums[i - 1] + 1) {
            currentStreak++;
        } else {
            if (currentStreak > longest) {
                longest = currentStreak;
            }
            currentStreak = 1;
        }
    }

    if (currentStreak > longest) {
        longest = currentStreak;
    }

    return longest;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestConsecutive(arr, n);
    printf("%d\n", result);

    return 0;
}
