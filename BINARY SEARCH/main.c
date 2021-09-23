#include <stdio.h>
#include <stdlib.h>


int BinarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0,high=size-1;


    while(low<=high){
            mid=(low+high)/2;
    if(arr[mid]==element)
        return mid;

    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    }
    return -1;
}

int main()
{
    int arr[]={12,23,34,45,56,67,79,89,90};
    int a,ele;
    printf("Enter the element you want to search\n");
    scanf("%d",&ele);

    a=BinarySearch(arr,9,ele);
    if(a==-1)
        printf("Element not found");
    else
        printf("Element is found at index %d",a);


}

