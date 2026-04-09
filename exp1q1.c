#include<stdlib.h>
#include<stdio.h>
 int add(int a,int b){
        return(a+b);
    }
    int sub(int a,int b){
        return(a-b);
    }
    int mult(int a,int b){
        return(a*b);
    }
    float div(int a,int  b){
        return (float)a/b;
    }

int main(){
    int num1,num2,a1,a2,a3;
    float a4;
    printf("Enter two integers:");
    scanf("%d %d",&num1,&num2);

    a1=add(num1,num2);
    a2=sub(num1,num2);
    a3=mult(num1,num2);
    a4=div(num1,num2);
    printf("addition:%d\n subtraction:%d\n multiplication:%d\n division:%f",a1,a2,a3,a4);
}
   