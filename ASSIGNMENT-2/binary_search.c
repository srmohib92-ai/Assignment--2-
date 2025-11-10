#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int key = 40;
    int low = 0, high = n - 1, mid, found = 0;

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nSearching for element: %d\n", key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found)
        printf("Element %d found at position %d.\n", key, mid + 1);
    else
        printf("Element %d not found in array.\n", key);

    return 0;
}
