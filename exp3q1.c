#include<stdio.h>
void traversing(int a[],int n){
    printf("traversing the array elements:");
    for (int i =0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[100],n,i;
    printf("Enter the size for the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i=0;i<=n-1 ;i++){
        scanf("%d",&a[i]);
    }
    traversing(a,n);
}
