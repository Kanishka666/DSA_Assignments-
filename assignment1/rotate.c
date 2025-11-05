#include<stdio.h>
int main() {
    
    int n , i;

    // input size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    // input elements of array
    printf("Enter elements of array: ");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    // rotate array by one position to the right
    int last = arr[n-1];    
    for(i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = last;

    // print rotated array
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}