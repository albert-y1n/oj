#include<stdio.h>
int main(){
    int n,c=1;
    long int b=1;
    long long int a;
    double f;
    scanf("%d",&n);
    if(n==0) a=0;
    else if(n==1||n==2)
    a=1;
    else{
    for(int i=2;i<n;i++){
        a=b+c;
        c=b;
        b=a;
    }}
    f=a;
    printf("%.2lf",f);
    return 0;
}
