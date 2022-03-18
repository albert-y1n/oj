#include<stdio.h>
#include<string.h>
int len(char* s){
    int i=0,n=0;
    while(*s!='\0'){
        n++;
        s++;
    }
    return n;
}
int main(){
    long long int a,b,c=1,d=1;
    char s1[10],s2[10];
    gets(s1);
    gets(s2);
    int m,n;
    m=len(s1);//自主实现strlen函数
    n=len(s2);
    for(a=0;a<m;a++){
        c=c*(s1[a]-'A'+1);
    }
    for(b=0;b<n;b++){
        d=d*(s2[b]-'A'+1);
    }
    if(c%47==d%47)
    puts("GO");
    else
    puts("STAY");
    return 0;
}
