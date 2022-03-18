#include<stdio.h>
unsigned long long int jie(int n){
    long long int m=1;
    if(n==1)
    return m;
    else
    m=n*jie(n-1);
}
int main(){
    int n;
    unsigned long long int m=0;
    scanf("%d",&n);
    for(;n>=1;n--)
    m+=jie(n);
    printf("%llu",m);
    return 0;
}