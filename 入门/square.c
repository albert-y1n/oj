#include<stdio.h>
int main(){
    int n,m,a,s;
    scanf("%d%d%d",&n,&m,&a);
    int a1,a2;
    if(n%a==0)
    a1=n/a;
    else
    a1=n/a+1;
    if(m%a==0)
    a2=m/a;
    else
    a2=m/a+1;
    s=a1*a2;
    printf("%d",s);
    return 0;
}