#include<stdio.h>
double fib(int n){
    double f;
    if(n==1||n==2)
    return 1.00;
    else
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;double f;
    scanf("%d",&n);
    f=fib(n);
    printf("%.2f",f);
    return 0;
}