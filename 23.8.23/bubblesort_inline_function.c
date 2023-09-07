#include <stdio.h>

int ascendingComparator(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int descendingComparator(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

void bubbleSort(int arr[], int n, int (*comparator)(const void *, const void *)) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (comparator(&arr[j], &arr[j + 1]) > 0) {
                
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

  
    bubbleSort(arr, n, ascendingComparator);
    printf("Ascending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n, descendingComparator);
    printf("Descending Order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
