#include<stdio.h>
int main(){
    int n,search,arr[100],first,last,middle;
    printf("enter your array size : ");
    scanf("%d",&n);
    printf("enter your array : ");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("enter element to search : ");
    scanf("%d",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<last){
    if(arr[middle]<search)
    first=middle+1;
    else if(arr[middle]==search){
    printf("%d element found at index %d",search,middle);
    break;
    }
    else
    last=middle-1;
    middle=(first+last)/2;
}
   if(first>last)
   printf("element not found");
   return 0;



    

}