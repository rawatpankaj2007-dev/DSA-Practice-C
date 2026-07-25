#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, key;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    int l = linearSearch(arr, n, key);
    int b = binarySearch(arr, n, key);

    if(l != -1)
        printf("Linear Search: Found at index %d\n", l);
    else
        printf("Linear Search: Not Found\n");

    if(b != -1)
        printf("Binary Search: Found at index %d\n", b);
    else
        printf("Binary Search: Not Found\n");

    return 0;
}