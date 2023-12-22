#include <stdio.h>
void printDuplicates(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {
            int count = 1;
            while (arr[i] == arr[i + 1]) {
                count++;
                i++;
            }
            if (count > 1) {
                printf("%d->%d, ", arr[i], count);
            }
        }
    }
}
int main() {
    int n;
    printf("N =  ");
    scanf("%d", &n);
    int arr[n];
    printf("Array = ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Output:\n");
    printDuplicates(arr, n);
    return 0;
}