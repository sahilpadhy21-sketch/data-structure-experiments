#include<stdio.h>
int GCD(int,int);
int GCD(int a,int b)
{
    int temp;
    while (b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main(){
    int num1,num2.gcd;
    printf("Enter two integers: ");
    scanf("%d %d",&num1,&num2);
    gcd=GCD(num1,num2);
    printf("GCD  is %d",gcd);
}