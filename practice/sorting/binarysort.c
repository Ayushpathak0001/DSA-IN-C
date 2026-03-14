#include<stdio.h>
int main(){
    int arr[5]={54,65,34,75,34};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for (int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    }
}
    printf("array after sorting\n");
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
    return 0;



}