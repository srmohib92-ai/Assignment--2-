#include <stdio.h>

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = 5;
    int i, key, j;

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    printf("\nSorted array (Insertion Sort): ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
