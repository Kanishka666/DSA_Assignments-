#include<stdio.h>
int main() {
    
    int n , i, x ,mid, lower, upper;

    // input size of array
    printf("Enter size of array: \n");
    scanf("%d", &n);

    int arr[n];

    // input elements of array
    printf("Enter elements of array: \n");
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search\n");
    scanf("%d", &x);

    // sorting the array in ascending order
    for(i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 

    // binary search
    lower = 0;
    upper = n - 1;

    while(lower <= upper) {
        mid = (lower + upper) / 2; 
        if(arr[mid] == x) {
            printf("Element found at position %d in the sorted array\n", mid+1);
            break;
        }
        else if(arr[mid] < x) {
            lower = mid + 1;
        }
        else {
            upper = mid - 1;
        }
    }

    if(lower > upper) {
        printf("Element not found in the array\n");
    }

    return 0;
}