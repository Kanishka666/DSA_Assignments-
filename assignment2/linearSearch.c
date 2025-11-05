#include<stdio.h>
int main(){

    int n , i, x;

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

    for(i=0;i<n;i++){
        if(arr[i]==x){
            printf("Element found at position %d\n",i+1);
            break;
        }
    }
    return 0;
}