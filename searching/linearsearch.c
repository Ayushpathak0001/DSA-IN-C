#include<stdio.h>
int main(){
    int arr[100],n,search;
    printf("enter your array size : ");
    scanf("%d",&n);
    printf("enter your array : ");
    for (int i=0;i<n;i++){
        scanf("%d",& arr[i]);
    }
    printf("enter element to search : ");
    scanf("%d",&search);
    for (int i=0;i<n;i++){
        if(arr[i]== search){
            printf("element %d found at index at %d",search,i);
        }
    }
    return 0;
    printf("element not found");
    return 0;

    
}