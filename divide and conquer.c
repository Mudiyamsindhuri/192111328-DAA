#include <stdio.h>
struct MinMax {
    int min;
    int max;
};
struct MinMax findMinMax(int arr[], int low, int high) {
    struct MinMax result, left, right, middle;
    if (low == high) {
        result.min = arr[low];
        result.max = arr[low];
        return result;
    }
    if (high - low == 1) {
        result.min = (arr[low] < arr[high]) ? arr[low] : arr[high];
        result.max = (arr[low] > arr[high]) ? arr[low] : arr[high];
        return result;
    }
    int mid = (low + high) / 2;
    left = findMinMax(arr, low, mid);
    right = findMinMax(arr, mid + 1, high);
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;
    
    return result;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    struct MinMax result = findMinMax(arr, 0, n - 1);
    printf("Minimum: %d\n", result.min);
    printf("Maximum: %d\n", result.max);
    
    return 0;
}

OUTPUT:

Enter the number of elements: 6
Enter the elements:
2
4
3
6
3
2
Minimum: 2
Maximum: 6

-----------------------------------------------------------------------------------------------------------------

//18.C PROGRAM TO GENERATE ALL PRIME NUMBERS

#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int n) {
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }
    printf("Prime numbers in the range 2 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int range;
    printf("Enter the range to generate prime numbers: ");
    scanf("%d", &range);
    
    if (range < 2) {
        printf("There are no prime numbers in the given range.\n");
    } else {
        sieveOfEratosthenes(range);
    }
    
    return 0;
}

