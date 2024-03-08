#include <stdio.h>

void bubbleSort(int arr[], int n, int *totalSwaps) {
    int i, j, temp;
    for(i=0; i<n-1; i++){
        int swaps=0;
        for(j=0; j< n-i-1; j++) {
            if(arr[j]> arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swaps++;
                (*totalSwaps)++;
            }
        }
        printf("Number %d swapped %d times. \n", arr[j], swaps);
    }
}
int main() {
    int arr[]={64, 34, 25, 12, 22, 11, 90};
    int arr2[]={14, 10, 69, 37, 42, 29, 30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int totalSwaps=0;
    int totalSwaps2=0;
    bubbleSort(arr, n, &totalSwaps);
    printf("Total number of swaps: %d\n", totalSwaps);
    printf("Sorted Array: ");
    for( int i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    bubbleSort(arr2, n2, &totalSwaps2);
    printf("Total number of swaps: %d\n", totalSwaps2);
    printf("Sorted Array: ");
    for (int i = 0; i<n2; i++)
        printf("%d ", arr2[i]);
     printf("\n");
     return 0;
}