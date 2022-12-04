#include<stdio.h>

int main(){
    
    int n, s=0,t,r;
    scanf("%d",&n);
    t=n;
    while (n!=0){
        r=n%10;
        s = s + (r*r*r);
        n/=10;
    }
    (t==s)?printf("Armstrong"):printf("not armstrong");

    return 0;
}w