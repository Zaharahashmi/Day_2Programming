#include <stdio.h>
void printUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }
    while (i < n) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m) {
        printf("%d ", arr2[j]);
        j++;
    }
}
int main() {
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    int arr1[n];
    printf("arr1[] = ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("m = ");
    scanf("%d", &m);
    int arr2[m];
    printf("arr2[] = ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }
    printf("Output: ");
    printUnion(arr1, arr2, n, m);
    return 0;
}