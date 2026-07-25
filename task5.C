#include <stdio.h>

int main() {
    int n;
    float sum = 0, avg;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;

    printf("Average = %.2f", avg);

    return 0;
}