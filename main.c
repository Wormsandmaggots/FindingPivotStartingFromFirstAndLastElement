#include <stdio.h>
int partition_start(int arr[],int );
int partition_end(int arr[],int size);
int main() {
    int arr[]= {5,10,16,6,12,11,7,18,9};
    int arr2[]={10,5,8,11,7,2,4,13};
    int size=sizeof(arr)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    printf("pivot na koncu\n");
    partition_end(arr,size);
    printf("pivot na poczatku\n");
    partition_start(arr2,size2);
    return 0;
}
int partition_start(int arr[],int size)
{
    int i=0;
    int j=size-1;
    int pivot=arr[0];
    while(i<j)
    {
        while(arr[i]<pivot)
            i++;
        while(arr[j]>=pivot)
            j--;
        if(i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for (int k = 0; k < size; ++k) {
            printf("%d ",arr[k]);
        }
        printf("\n");
    }
    return 0;
}
int partition_end(int arr[],int size)
{
    int i=0;
    int j=0;
    int pivot=arr[size-1];
    for (; j < size; ++j) {
        if(arr[j]<=pivot)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            for (int k = 0; k < size; ++k) {
                printf("%d ",arr[k]);
            }
            printf("\n");
        }
    }
    return 0;
}