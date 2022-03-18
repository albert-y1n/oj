#include<stdio.h>
int main(){
    int a=0,n,i;
    scanf("%d",&n);
    for(i=0;i<10000000;i++){
    a=a+i;
    if(n<=a)
    break;
    }
    int x,y;
    x=i-a+n;
    y=a-n+1;
    if(i%2==1){
        printf("%d/%d",y,x);
    }
    else{
        printf("%d/%d",x,y);
    }
    return 0;
}