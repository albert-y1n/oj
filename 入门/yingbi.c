#define max 100
#include<stdio.h>
int main(){
    int n;
    int a[max]={0};
    scanf("%d",&n);
    printf("%d\n",n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j!=i){
                if(a[j]==0)
                a[j]=1;
                else
                a[j]=0;
            }
            printf("%d",a[j]);
        }
        printf("\n");
    }
    return 0;
}