#include<stdio.h>
#include<math.h>
#define max 1000
int main(){
    int n;
    scanf("%d",&n);
    int a[max]={0};
    a[0]=n;
    int i;
    for(i=1;i<n+1;i++){
        getchar();
        scanf("%d",&a[i]);
    }
    int b[max]={0};
    for(int k=0;k<n-1;k++){
        b[k]=k+1;
    }
    int c=0;
    for(int j=1;j<n;j++){
        for(int m=0;m<n-1;m++){
            if(abs(a[j]-a[j+1])==b[m]){
                b[m]=0;
                c++;
                continue;
            }
        }
    }
    if(c==(n-1))
    printf("Jolly\n");
    else
    printf("Not jolly\n");
    return 0;
}