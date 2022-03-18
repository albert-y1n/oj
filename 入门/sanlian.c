#include<stdio.h>
int main(){
    int a,b,c,a1,a2,a3,b1,b2,b3,c1,c2,c3;
    for(a=100;a<990;a++){
        for(b=100;b<990;b++){
            for(c=100;c<990;c++){
                if((b==2*a)&&(c==3*a)){
                a1=a%10;
                a2=(a/10)%10;
                a3=(a/100);
                b1=b%10;
                b2=(b/10)%10;
                b3=(b/100);
                c1=c%10;
                c2=(c/10)%10;
                c3=(c/100);
                if((a1+a2+a3+b1+b2+b3+c1+c2+c3)==45){
                    if((a1*a2*a3*b1*b2*b3*c1*c2*c3)==362880)
                printf("%d %d %d\n",a,b,c);
                }
                }
            }
        }
    }
    return 0;
}   