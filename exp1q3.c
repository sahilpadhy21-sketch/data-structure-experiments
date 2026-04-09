#include<stdio.h>
void prime(int);
void prime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("\n %d is not a  prime number!!",num);
            break;
        }
    }
    if(i==num){
        printf("%d is a prime number",num);
    }
}
int main(){
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    prime(x);
}