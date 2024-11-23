/*A4. rotate array every kth element
1 2 3 4 5 6 7 8 9
k= 3
3 2 1 6 5 4 9 8 7
Code:*/

#include <stdio.h>
int  rotate(int arr[], int n, int k) {
    for (int i = 0; i < n; i += k) {
        int a = i;
        int b = i + k - 1;
        if (b >= n) {
            b = n - 1;
        }
        while (a < b) {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;
            a++;
            b--;
        }
    }
}
int Array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    printf("Original Array: ");
    Array(arr, n);
    rotate(arr, n, k);
    printf("Array after rotating every %dth element: ", k);
    Array(arr, n);
    return 0;
}
