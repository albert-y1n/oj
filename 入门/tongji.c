#include<stdio.h>
int main(){
    long long int l,r,s,t,n=0;
    scanf("%lld%lld",&l,&r);
    for(s=l;s<=r;s++){
        t=s;
        while(t){
            if(t%10==2){
            ++n;}
            t=t/10;
        }
    }
    printf("%lld",n);
    return 0;
}