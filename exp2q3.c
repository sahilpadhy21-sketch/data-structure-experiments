#include<stdio.h>
void array_searching(int a[],int n,int x){
    int i;
    for (i=0;i<=n-1;i++){
        if(x==a[i]){
            printf("The element %d is found in the %d location",x,i);
            break;
        }
        else{
            continue;
        }
        if(x!=a[i]){
            printf("the element is not found");
        }
    }
    
}

int main(){
    int a[100],i,n,x;
    printf("Enter the size  of the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:");
    for(i=0;i<=n-1;i++){
          scanf("%d",&a[i]);
    }
    printf("Enter the elemnt that you want to search:");
    scanf("%d",&x);

    array_searching(a,n,x);
}
