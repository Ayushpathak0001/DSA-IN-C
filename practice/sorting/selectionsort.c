#include<stdio.h>
int main(){
    int arr[]={10,9,54,23,53,55};
    int N=sizeof(arr)/sizeof(arr[0]);
    printf("Unsorted Array\n");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=0;i<N-1;i++){
        int mid_idx=i;
    for(int j=i+1;j<N;j++){
    if(arr[j]<arr[mid_idx]){
        mid_idx=j;
    }
    }
    
    int temp=arr[mid_idx];
    arr[mid_idx]=arr[i];
    arr[i]=temp;
}

    printf("Sorted array\n");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;


}