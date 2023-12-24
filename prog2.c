#include <stdio.h>
int hasPairWithSum(int arr[], int n, int X) {
    int visited[100000] = {0}; 
    for (int i = 0; i < n; i++) {
        int complement = X - arr[i];
        if (visited[complement]) {
            return 1;
        }
        visited[arr[i]] = 1;
    }
    return 0; 
}
int main() {
    int N, X;
    printf("N = ");
    scanf("%d", &N);
    printf("X = ");
    scanf("%d", &X);
    int Arr[N];
    printf("Arr[] = ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }
    if (hasPairWithSum(Arr, N, X)) {
        printf("Output: Yes");
    } else {
        printf("Output: No");
    }
    return 0;
}