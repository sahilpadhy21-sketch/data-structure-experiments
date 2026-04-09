#include<stdio.h>
int factorial(int);
int factorial(int num){
    if(num==1){
        return 1;
    }
    else
    return num*factorial(num-1);
}
int main(){
    int fact,n;;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("The factroial of the integer is: %d",factorial(n));
    return 0;
}