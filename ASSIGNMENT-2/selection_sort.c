#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = 5;
    int i, j, min, temp;

    printf("Original array: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("\nSorted array (Selection Sort): ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
