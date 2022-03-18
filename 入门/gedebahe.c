#include<stdio.h>
#include<math.h>
int zhi(int n){
    int i,k=0,l=0;
    k=(int)sqrt((double)n)+1;
    if(n==2) l=0;
    else{
    for(i=2;i<k;i++){
        if(n%i==0){
            l=1;
            break;
        }
    }
    }
    return l;
}
int main(){
    int n,a=0,b=0,c=0;
    scanf("%d",&n);
    for(c=4;c<=n;c=c+2){
    for(a=2;a<=(c/2)+1;a++){
        if(!zhi(a)){
            b=c-a;
            if(!zhi(b)){
            printf("%d=%d+%d\n",c,a,b);
            break;
            }
        }
    }
    }
    return 0;
    }