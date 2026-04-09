#include<stdio.h>
void fib(int);
void fib(int num){
int i,num1,num2,next_num;;
num1=0;
num2=1;
for (i=1;i<=num;i++){
    if(i==1){
        printf("%d",num);
    }
    else{
        next_num=num1+num2;
        printf("%d",next_num);
        num1=num2;
        num2=next_num;
    }
}

}