#include<stdio.h>
void array_deletion(int a[],int n,int loc){
    int i;
    if(loc==n-1){
        n--;
    }
    else{
        for(i=loc;i<=n-2;i++){
            a[i]=a[i+1];
        }
        n--;
    }
    printf("printinng the array");
    for(i=0;i<=n-1;i++){
        printf("%d",a[i]);
    }
}

int main(){
    int  a[10],n,i,loc;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements for the array:");
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the  location which you want to delete :");
    scanf("%d",&loc);

    array_deletion(a,n,loc);

    return 0;
}