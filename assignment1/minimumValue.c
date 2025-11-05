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

    // find minimum value
    int min=arr[0];
    for(i = 0; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    // print minimum value
    printf("Minimum value in the array is: %d\n", min);
    return 0;
}