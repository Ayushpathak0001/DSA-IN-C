#include<stdio.h>
int main(){
    int arr[10]={6,3,4,5,1,2,7,10,9,10};
    int n=sizeof(arr)/(arr[0]);
    for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
     int temp=arr[j];
     arr[j]=arr[j+1];
     arr[j+1]=temp;
    }
    }
    }
    printf("After sorting \n");
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
    return 0;

}