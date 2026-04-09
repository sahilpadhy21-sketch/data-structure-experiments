#include<stdio.h>
void Array_insertation(int a[],int n,int loc,int x){
    int i;
    if(loc==n){
        a[n]=x;
    }
    else{
        for(i=n;i>=loc+1;i--){
           a[i]=a[i-1];
        }
        a[loc]=x;
    }
    n++;
    printf("printing the array");
    for(i=0;i<=n-1;i++){
        printf("%d\n",a[i]);
    }
}

int  main(){
    int a[10],n,i,loc,x;
    printf("Enter the size of the array :");
    scanf("%d",&n);;
    printf("Enter the elemments for the array: ");
    for (i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the location where you want to insert the  element :");
    scanf("%d",&loc);
    printf("Enter the element which you want to insert :");
    scanf("%d",&x);

    Array_insertation(a,n,loc,x);

    returnn 0;

}