#include<stdio.h>
int main(){

    int arr[4][4] , i , j;

    printf("Enter the elements of 4x4 matrix:\n");
    for(i=0; i<4; i++){
        for(j=0;j<4; j++){
            printf("Enter element at row[%d] and column[%d]: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    } 

    printf("The 4x4 matrix is:\n");
    for(i=0; i<4; i++){
        for(j=0;j<4; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}