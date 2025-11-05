#include<stdio.h>
int main() {
    
    int n, i, min;

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

    // print 2nd minimum value
    printf("Second minimum value in the array is: %d\n", arr[1]);
    return 0;
}