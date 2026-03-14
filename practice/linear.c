#include<stdio.h>
int main(){
    int n,search,arr[100];
    printf("enter your array size : ");
    scanf("%d",&n);
    printf("enter your array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter number to search : ");
    scanf("%d",&search);
    for (int i=0;i<n;i++){
        if(arr[i]==search){
            printf(" %d element found at index %d\n ",search,i);

    }
    return 0;
    printf("elment not found");
    return 0;
}