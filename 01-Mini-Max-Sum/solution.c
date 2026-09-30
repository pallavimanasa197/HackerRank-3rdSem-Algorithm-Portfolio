#include <stdio.h>

void miniMaxSum(int arr_count, int* arr) {
    long long sum = 0;
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < arr_count; i++) {
        sum += arr[i];

        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%lld %lld\n", sum - max, sum - min);
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(5, arr);

    return 0;
}