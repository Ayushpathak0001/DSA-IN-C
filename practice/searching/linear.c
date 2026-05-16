#include<stdio.h>
int main(){
    int arr[10],n,search,i,found;
    printf("enter element size: ");
    scanf("%d",&n);
    printf("enter array element: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter element to search: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
    if(arr[i]==search){
        printf("%d element is found at %d location",search,i+1);
        found++;
        break;
    }
}
    if(found==0) 
    printf("%d element is not found: ");
    return 0;
}
